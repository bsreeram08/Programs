package com.mycompany.sree.braintrainer;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.GridLayout;
import android.widget.TextView;

public class Playagain extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_playagain);
        Button playagain = findViewById(R.id.playagain);
        Intent MainaIntent = getIntent();
        String Total = MainaIntent.getStringExtra("Questions").toString();
        String Correct = MainaIntent.getStringExtra("Answers").toString();
        TextView Totques,ansques;
        Totques = findViewById(R.id.total);
        ansques = findViewById(R.id.correct);
        Totques.append(Total);
        ansques.append(Correct);
        playagain.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent( Playagain.this,MainActivity.class);
                startActivity(intent);
                }
        });
    }
}
