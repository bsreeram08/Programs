package com.sree.mycompany.tictactoe;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {
    Button btn;
    TextView text;
    int playerActive=0;
    boolean gameState = true;
    int placeOwner[]={2,2,2,2,2,2,2,2,2};
    int winningPositions[][]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    public void result(View view)
    {
        Button pressed = (Button) view;
        int tappedcounter= Integer.parseInt(pressed.getTag().toString());
        if(placeOwner[tappedcounter]==2&&gameState==true) {
            placeOwner[tappedcounter]=playerActive;
            pressed.setTranslationY(-1500);
            if(playerActive==0) {
                pressed.setText("X");
                playerActive=1;
            }
            else
            {
                pressed.setText("O");
                playerActive=0;
            }
            pressed.animate().translationYBy(1500).rotation(3600).setDuration(300);
            for(int winningpos[] : winningPositions)
            {
                if(placeOwner[0]==placeOwner[1]&&placeOwner[1]==placeOwner[2]&&placeOwner[2]==placeOwner[3])
                {
                    String winner = "";
                    if(playerActive==0)
                    {
                        winner = "O";
                    }
                    else
                    {
                        winner = "X";
                    }
                    text=findViewById(R.id.state);
                    text.setText(winner+" won The Game");
                    text.setVisibility(View.VISIBLE);
                    btn.setVisibility(View.VISIBLE);
                }
            }
        }
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btn = findViewById(R.id.playagain);
        btn.setVisibility(View.INVISIBLE);
    }
}
