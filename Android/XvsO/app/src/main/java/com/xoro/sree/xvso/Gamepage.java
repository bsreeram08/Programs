package com.xoro.sree.xvso;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.GridLayout;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class Gamepage extends AppCompatActivity {
    int player=0;
    Button btn;
    TextView text;
    int State[]={2,2,2,2,2,2,2,2,2};
    int [][] winningpositions={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    boolean gameactive=true;
    public void display(View view)
    {
        ImageView img = (ImageView) view;
        int tappedCounter = Integer.parseInt(img.getTag().toString());
        if (State[tappedCounter] == 2 && gameactive == true) {
            img.setTranslationY(-1500);
            State[tappedCounter] = player;
            if (player == 0) {
                img.setImageResource(R.drawable.x);
                player = 1;
            } else if (player == 1) {
                img.setImageResource(R.drawable.o);
                player = 0;
            }
            img.animate().translationYBy(1500).rotation(3600).setDuration(300);
            for (int[] winningpos : winningpositions) {
                if (State[winningpos[0]] == State[winningpos[1]] && State[winningpos[1]] == State[winningpos[2]] && State[winningpos[0]] != 2) {
                    String winner = "";
                    gameactive = false;
                    if (player == 0) {
                        winner = "O";
                    } else if (player == 1) {
                        winner = "X";
                    }
                    text = (TextView) findViewById(R.id.textView);
                    text.setText(winner + " Won The Game!");
                    text.setVisibility(View.VISIBLE);
                    btn = (Button) findViewById(R.id.Playagain);
                    btn.setVisibility(View.VISIBLE);
                    //Toast.makeText(this, winner + " Won the Game", Toast.LENGTH_SHORT).show();
                    for (int loop = 0; loop < 9; loop++) {
                        State[loop] = 2;
                        player = 0;
                    }
                    btn.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public void onClick(View v) {
                            text.setVisibility(View.INVISIBLE);
                            btn.setVisibility(View.INVISIBLE);
                            GridLayout grid;
                            grid=(GridLayout)findViewById(R.id.gridlayout);
                            for(int loop=0;loop<grid.getChildCount();loop++)
                            {
                                ImageView img = (ImageView) grid.getChildAt(loop);
                                img.setImageDrawable(null);
                                gameactive=true;
                                player=0;
                                for(int stateloop=0;stateloop<9;stateloop++)
                                {
                                    State[stateloop]=2;
                                }
                            }
                        }
                    });
                }
            }
        }
        int count2s=0;
        for(int loop=0;loop<9;loop++)
        {
            if(State[loop]!=2)
            {
                count2s++;
            }
        }
        if(count2s==9&&gameactive==true)
        {
            text = (TextView) findViewById(R.id.textView);
            text.setText("Game Draw!");
            text.setVisibility(View.VISIBLE);
            btn = (Button) findViewById(R.id.Playagain);
            btn.setVisibility(View.VISIBLE);
            btn.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    text.setVisibility(View.INVISIBLE);
                    btn.setVisibility(View.INVISIBLE);
                    GridLayout grid;
                    grid=(GridLayout)findViewById(R.id.gridlayout);
                    for(int loop=0;loop<grid.getChildCount();loop++)
                    {
                        ImageView img = (ImageView) grid.getChildAt(loop);
                        img.setImageDrawable(null);
                        gameactive=true;
                        player=0;
                        for(int stateloop=0;stateloop<9;stateloop++)
                        {
                            State[stateloop]=2;
                        }
                    }
                }
            });
        }
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_gamepage);
    }

}
