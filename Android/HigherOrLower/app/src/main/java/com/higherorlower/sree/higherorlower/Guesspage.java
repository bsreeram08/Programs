package com.higherorlower.sree.higherorlower;

import android.graphics.Color;
//import android.os.Handler;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
//import android.view.MotionEvent;
import android.view.View;
import java.util.Random;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

//import org.w3c.dom.Text;

public class Guesspage extends AppCompatActivity {
    Button submit;
    EditText Value;
    TextView tries,gameno,Reveal,hint;
    int Click=0,gametimes=0,flag=0;
    int RandomValue;
    void hint()
    {
        if(flag==0)
        {
            flag=1;
            TextView t1,th,tl;
            t1=(TextView)findViewById(R.id.hint);
            th=(TextView)findViewById(R.id.hinthigh);
            tl=(TextView)findViewById(R.id.hintlow);
            th.animate().alpha(0).setDuration(1000);
            tl.animate().alpha(0).setDuration(1000);
            t1.animate().alpha(1).setDuration(1000);
        }
    }
    void GenerateRandom()
    {
        Random rand = new Random();
        RandomValue = rand.nextInt(20)+1;
    }
    void NumberCheck()
    {
        if(Click==0)
        {
            GenerateRandom();
        }
        Value=(EditText)findViewById(R.id.value);
        int answer = Integer.parseInt(Value.getText().toString());
        if(RandomValue==answer)
        {
            Toast.makeText(Guesspage.this,"You Guessed it Right!",Toast.LENGTH_SHORT).show();
            GenerateRandom();
            gametimes++;
            gameno=(TextView)findViewById(R.id.Maintext);
            gameno.setText(String.format("Game Number: %d", gametimes));
            Value.setText("");
            Click=0;
            flag=0;
            hint();
            ChangeVIew();
        }
        else
        {
            if(answer<RandomValue)
            {
                TextView t1,th,tl;
                t1=(TextView)findViewById(R.id.hint);
                th=(TextView)findViewById(R.id.hinthigh);
                tl=(TextView)findViewById(R.id.hintlow);
                t1.animate().alpha(0).setDuration(1000);
                tl.animate().alpha(0).setDuration(1000);
                th.animate().alpha(1).setDuration(1000);
                //t1.setText("Try Higher ^ ");
            }
            else
            {
                TextView t1,tl,th;
                t1=(TextView)findViewById(R.id.hint);
                th=(TextView)findViewById(R.id.hinthigh);
                tl=(TextView)findViewById(R.id.hintlow);
                t1.animate().alpha(0).setDuration(1000);
                th.animate().alpha(0).setDuration(1000);
                tl.animate().alpha(1).setDuration(1000);
                //t1.setText("Try Lower v ");
            }
        }
    }
    void ChangeVIew()
    {
        tries=(TextView)findViewById(R.id.tries);
        String val=""+Click;
        tries.setText(val);
        if(Click<=10)
        {
            tries.setTextColor(Color.GREEN);
        }
        else if(Click>10&&Click<20)
        {
            tries.setTextColor(Color.YELLOW);
        }
        else if(Click>=20)
        {
            tries.setTextColor(Color.RED);
        }
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_guesspage);
        submit=(Button) findViewById(R.id.submit);
        GenerateRandom();
        submit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Click++;
                hint();
                NumberCheck();
                ChangeVIew();
            }
        });

       /* submit.setOnTouchListener(new View.OnTouchListener() {
            private Handler mhandler;
            @Override
            public boolean onTouch(View v, MotionEvent event) {
                switch (event.getAction())
                {
                    case MotionEvent.ACTION_DOWN:
                        if(mhandler != null) return true;
                        mhandler=new Handler();
                        mhandler.postDelayed(maction,5000);
                        break;
                    case MotionEvent.ACTION_UP:
                        if(mhandler != null) return true;
                        mhandler.removeCallbacks(maction);
                        mhandler=null;
                        break;
                }
                return false;
            }
            Runnable maction= new Runnable()
            {
                @Override public void Run(){
                    System.out.println("Performing Acrion!");
                    mhandler.postDelayed(this,5000);
                }
            };
        });*/
       Reveal=(TextView)findViewById(R.id.reveal);
       Reveal.setOnClickListener(new View.OnClickListener() {
           @Override
           public void onClick(View v) {
               String ans=""+RandomValue;
               Toast.makeText(Guesspage.this,ans,Toast.LENGTH_SHORT).show();
           }
       });
    }
}
