package com.mycompany.sree.minepage;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class GameLosePage extends AppCompatActivity {
    Button MainMenu;
    Button Exit;
    Button NewGame;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game_lose_page);
        MainMenu = (Button)findViewById(R.id.MainMenu);
        Exit =(Button)findViewById(R.id.Exit);
        NewGame=(Button)findViewById(R.id.NewGame);
        MainMenu.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(GameLosePage.this,MainMenu.class);
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
                Intent intent = new Intent(GameLosePage.this,MainActivity.class);
                startActivity(intent);
            }
        });
    }
}
