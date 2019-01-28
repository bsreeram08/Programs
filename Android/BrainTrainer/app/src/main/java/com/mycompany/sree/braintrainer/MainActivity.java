package com.mycompany.sree.braintrainer;

import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.CountDownTimer;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.GridLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import java.util.Random;

public class MainActivity extends AppCompatActivity {
    int totalquestions=0, correctquestions=0,sum1,sum2;
    Random rand = new Random();
    CountDownTimer countDownTimer;
    int Time,bound=20;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }
    public void gobtn(View view)
    {
        ViewGroup layout =(ViewGroup) view.getParent();
        layout.removeView(view);
        LinearLayout linearLayout = findViewById(R.id.layoutgame);
        linearLayout.setAlpha(1);
        startgame();
    }
    void generateanswer()
    {
        Random random = new Random();
        bound=20;
        for(int correct=0;correct<totalquestions;correct+=10)
        {
            bound+=20;
        }
        Toast.makeText(MainActivity.this,""+bound,Toast.LENGTH_SHORT).show();
        sum1= random.nextInt(bound)+1;
        sum2 = random.nextInt(bound)+1;
    }
    int generaterandomnumber()
    {
        return rand.nextInt(bound+bound)+1;
    }
    void startgame()
    {
        Time=20100;
        totalquestions=0; correctquestions=0;sum1=0;sum2=0;
        startTimer();
        playgame();
    }
    void playgame()
    {
        generateanswer();
        TextView result,question;
        question = findViewById(R.id.problem);
        result = findViewById(R.id.Score);
        String str = sum1+"+"+sum2;
        question.setText(str);
        final TextView interpreter = findViewById(R.id.interpreter);
        str = correctquestions+"/"+totalquestions;
        result.setText(str);
        int answer=sum1+sum2,pos = rand.nextInt(4);
        int randplace = pos;
        while (randplace==pos) {
            randplace = rand.nextInt(4);
        }
        GridLayout gridLayout = findViewById(R.id.gridlayout);
        for(int loop=0;loop<gridLayout.getChildCount();loop++)
        {
            final TextView textView = (TextView) gridLayout.getChildAt(loop);
            if(pos==loop)
            {
                textView.setText(""+answer);
                textView.setTag("1");
            }
            else if(loop==randplace)
            {
                textView.setTag("0");
                int randnumber=answer;
                while (randnumber==answer)
                    randnumber=generaterandomnumber();
                for(int ran=0;ran<10;ran++)
                {
                    if(randnumber%10!=answer%10)
                    {
                        if(randnumber%10<answer%10)
                        {
                            randnumber++;
                        }
                        else
                        {
                            randnumber--;
                        }
                    }
                }
                textView.setText(""+randnumber);
            }
            else
            {
                textView.setTag("0");
                int randnumber=answer;
                while (randnumber==answer)
                randnumber=generaterandomnumber();
                textView.setText(""+randnumber);
            }
            textView.setOnClickListener(new View.OnClickListener() {
                @SuppressLint("ObsoleteSdkInt")
                @TargetApi(Build.VERSION_CODES.O)
                @Override
                public void onClick(View v) {
                    if(textView.getTag().toString().equals("1"))
                    {
                        correctquestions++;
                        totalquestions++;
                        Time+=2000;
                        playgame();
                        countDownTimer.cancel();
                        interpreter.setText("Correct :-) !!");
                        startTimer();
                    }
                    else
                    {
                        Vibrator vibrator = (Vibrator) getSystemService(Context.VIBRATOR_SERVICE);
                        //if(Build.VERSION.SDK_INT >= Build.VERSION_CODES.0)
                        {
                            vibrator.vibrate(VibrationEffect.createOneShot(500, VibrationEffect.DEFAULT_AMPLITUDE));
                        }
                        totalquestions++;
                        interpreter.setText("Wrong :-/ !!");
                        playgame();
                    }
                }
            });
        }
    }
    void startTimer()
    {
        final TextView Timertext = findViewById(R.id.Timer);
        countDownTimer = new CountDownTimer(Time,1000) {
            @Override
            public void onTick(long millisUntilFinished) {
                String Str = millisUntilFinished/1000 + "s";
                Time =(int) millisUntilFinished;
                Timertext.setText(Str);
            }

            @Override
            public void onFinish() {
                Intent intent = new Intent(MainActivity.this,Playagain.class);
                intent.putExtra("Questions",""+totalquestions);
                intent.putExtra("Answers",""+correctquestions);
                startActivity(intent);
            }
        };
        countDownTimer.start();
    }

}
