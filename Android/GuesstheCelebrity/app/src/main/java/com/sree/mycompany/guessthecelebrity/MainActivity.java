package com.sree.mycompany.guessthecelebrity;

import android.annotation.TargetApi;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.AsyncTask;
import android.os.Build;
import android.support.annotation.RequiresApi;
import android.support.constraint.ConstraintLayout;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.Toast;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.Random;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MainActivity extends AppCompatActivity {

    private ProgressBar spinner;
    public String data="";
    public int chosenceleb;
    public Bitmap[] celebpic = new Bitmap[1];
    public ArrayList <String>  celebnames = new ArrayList<String>();
    public ArrayList <String>  celeburls = new ArrayList<String>();
    public String[] Answers = new String[4];
    public int locationofcorrect = 0;
    public ImageView imageView ;
    public Button button0 ;
    public Button button1 ;
    public Button button2 ;
    public Button button3 ;
    public class imagedownload extends AsyncTask<String,Void,Bitmap> {
        @Override
        protected Bitmap doInBackground(String... strings) {
           try
           {
               URL urlurl = new URL(strings[0]);
               Bitmap bitmapdata;
               HttpURLConnection connection =(HttpURLConnection) urlurl.openConnection();
               connection.connect();
               InputStream inputStream = connection.getInputStream();
               bitmapdata= BitmapFactory.decodeStream(inputStream);
               return bitmapdata;
           }
           catch (Exception e)
           {
               e.printStackTrace();
           }
           return null;
        }
    }
    public void reveal(View view)
    {
        Toast.makeText(MainActivity.this,""+locationofcorrect,Toast.LENGTH_SHORT).show();
    }
    public void correctans(View view) {
        String selected = view.getTag().toString();
        if(Integer.parseInt(selected)==locationofcorrect)
        {
            Toast.makeText(MainActivity.this,"CORRECT",Toast.LENGTH_SHORT).show();
        }
        else
        {
            Toast.makeText(MainActivity.this,"WRONG",Toast.LENGTH_SHORT).show();
        }
        nextquestion();
    }
    public void nextquestion()
    {
        Random rand = new Random();
        chosenceleb = rand.nextInt(celebnames.size());
        try {
            celebpic[0] = new imagedownload().execute(celeburls.get(chosenceleb)).get();
        } catch (Exception e) {
            e.printStackTrace();
        }
        imageView.setImageBitmap(celebpic[0]);
        locationofcorrect = rand.nextInt(4);
        int incorrectanslocation;
        for(int i=0;i<4;i++)
        {
            if(i==locationofcorrect)
            {
                Answers[i]=celebnames.get(chosenceleb);
            }
            else
            {
                incorrectanslocation = rand.nextInt(celeburls.size());
                while(incorrectanslocation==locationofcorrect)
                {
                    incorrectanslocation=rand.nextInt(celeburls.size());
                }
                Answers[i]=celebnames.get(incorrectanslocation);
            }
        }
        button0.setText(Answers[1]);
        button1.setText(Answers[2]);
        button2.setText(Answers[3]);
        button3.setText(Answers[0]);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final ConstraintLayout constraintLayout = findViewById(R.id.gameLayout);
        constraintLayout.setVisibility(View.INVISIBLE);
        final Button playgame = findViewById(R.id.playgamebtn);
        imageView = findViewById(R.id.imageView);
        button0 = findViewById(R.id.button);
        button1 = findViewById(R.id.button2);
        button2 = findViewById(R.id.button3);
        button3 = findViewById(R.id.button4);
        playgame.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try
                {
                    playgame.setVisibility(View.INVISIBLE);
                    constraintLayout.setVisibility(View.VISIBLE);
                    InputStream inputStream = getAssets().open("file.txt");
                    BufferedReader reader = new BufferedReader(new InputStreamReader(inputStream));
                    String str="";
                    if (inputStream!=null) {
                        while ((str = reader.readLine()) != null) {
                            data+=str;
                        }
                    }
                    inputStream.close();
                }
                catch (Exception e)
                {
                    e.printStackTrace();
                }
                Pattern p = Pattern.compile("img alt=\"(.*?)\"");
                Matcher m = p.matcher(data);
                while(m.find()){
                    celebnames.add(m.group(1));
                }
                p = Pattern.compile("src=\"(.*?)\"");
                m = p.matcher(data);
                while(m.find()){
                    celeburls.add(m.group(1));
                }
                nextquestion();
            }
        });

    }
}
