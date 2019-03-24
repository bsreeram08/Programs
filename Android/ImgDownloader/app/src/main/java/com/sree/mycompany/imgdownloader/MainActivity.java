package com.sree.mycompany.imgdownloader;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.AsyncTask;
import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.Toast;

import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.concurrent.ExecutionException;

public class MainActivity extends AppCompatActivity {
    ImageView image;
    EditText urltext;
    public void downloadImage(final View view)
    {
        //Toast.makeText(MainActivity.this, "Clicked!", Toast.LENGTH_SHORT).show();
        final CharSequence jpg=".jpg",png =".png";
        ImageDownloader imageDownloader = new ImageDownloader();
        Bitmap myImage;
        String s = urltext.getText().toString();
        try {
            myImage = imageDownloader.execute(s).get();
            //myImage = imageDownloader.execute("https://i.ytimg.com/vi/smU1jpkRMkI/maxresdefault.jpg").get();
            if(myImage == null)
            {
                Toast.makeText(MainActivity.this, "Image Not Available, Check the Link...", Toast.LENGTH_SHORT).show();
            }
            else
            {
                image.setImageBitmap(myImage);
            }
        } catch (ExecutionException | InterruptedException e) {
            e.printStackTrace();
        }
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        image = findViewById(R.id.imageView);
        final Button button = findViewById(R.id.downloadimg);
        urltext = findViewById(R.id.editText);
        button.setEnabled(false);
        urltext.addTextChangedListener(new TextWatcher() {
            @Override
            public void beforeTextChanged(CharSequence s, int start, int count, int after) {
            }
            @Override
            public void onTextChanged(CharSequence s, int start, int before, int count) {
                if(s.toString().trim().length()>0)
                {
                    button.setEnabled(true);
                }
                else
                {
                    button.setEnabled(false);
                }
            }
            @Override
            public void afterTextChanged(Editable s) {

            }
        });
    }
    public class ImageDownloader extends AsyncTask<String,Void,Bitmap> {

        @Override
        protected Bitmap doInBackground(String... urls) {
            try
            {
                URL url = new URL(urls[0]);
                HttpURLConnection connection =(HttpURLConnection) url.openConnection();
                connection.connect();
                InputStream in = connection.getInputStream();
                Bitmap mybitmap = BitmapFactory.decodeStream(in);
                return mybitmap;
            }
            catch (Exception e)
            {
                e.printStackTrace();
                return null;
            }
        }
    }
}
