package com.mycompany.sree.minesweeper;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Gravity;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.GridLayout;
import android.widget.Toast;

public class Game extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game);
        Intent intent = getIntent();
        String value = intent.getStringExtra("Value");
        Toast.makeText(Game.this, value, Toast.LENGTH_SHORT).show();
        GridLayout gridLayout = findViewById(R.id.GridLayout);
        int val = Integer.parseInt(value);
        for (int i = 0; i < (val * val) && i < gridLayout.getChildCount(); i++) {
            gridLayout.getChildAt(i).setAlpha(1);
        }
    }
}
