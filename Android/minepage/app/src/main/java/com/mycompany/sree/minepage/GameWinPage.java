package com.mycompany.sree.minepage;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class GameWinPage extends AppCompatActivity {
    Button MainMenu;
    Button Exit;
    Button NewGame;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_win_page);
        MainMenu = (Button)findViewById(R.id.MainMenuw);
        Exit =(Button)findViewById(R.id.Exitw);
        NewGame=(Button)findViewById(R.id.NewGamew);
        MainMenu.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(GameWinPage.this,MainMenu.class);
                startActivity(intent);
            }
        });
        Exit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                finish();
                moveTaskToBack(true);
                System.exit(1);
            }
        });
        NewGame.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(GameWinPage.this,MainActivity.class);
                startActivity(intent);
            }
        });
    }
}
