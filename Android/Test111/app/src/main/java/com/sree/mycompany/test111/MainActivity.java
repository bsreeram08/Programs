package com.sree.mycompany.test111;

import android.graphics.Color;
import android.graphics.Typeface;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final EditText text;
        text = findViewById(R.id.textdata);
        final Button red = findViewById(R.id.red);
        Button blue = findViewById(R.id.blue);
        Button green = findViewById(R.id.green);
        final CheckBox bold,italic;
        bold = findViewById(R.id.bold);
        italic = findViewById(R.id.italic);
        final RadioGroup radioGroup = findViewById(R.id.radio);
        final TextView textView = findViewById(R.id.view);
        green.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                final String Textt = text.getText().toString();
                textView.setText(Textt);
                textView.setTextColor(Color.GREEN);
                if(bold.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.BOLD);
                }
                else if(italic.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.ITALIC);
                }
                else if(bold.isChecked()&&italic.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.NORMAL);
                }
                int rid =  radioGroup.getCheckedRadioButtonId();
                RadioButton radioButton = findViewById(rid);
                String font = radioButton.getText().toString();
                if(font.equals("Sans"))
                {
                    textView.setTextSize(40);
                }
                if(font.equals("TimesNewRoman"))
                {
                    textView.setTextSize(60);
                }
                if(font.equals("Verdana"))
                {
                    textView.setTextSize(10);
                }
            }
        });
        blue.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                final String Textt = text.getText().toString();
                textView.setText(Textt);
                textView.setTextColor(Color.BLUE);
                if(bold.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.BOLD);
                }
                else if(italic.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.ITALIC);
                }
                else if(bold.isChecked()&&italic.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.BOLD_ITALIC);
                }
                int rid =  radioGroup.getCheckedRadioButtonId();
                RadioButton radioButton = findViewById(rid);
                String font = radioButton.getText().toString();
                if(font.equals("Sans"))
                {
                    textView.setTextSize(40);
                }
                if(font.equals("TimesNewRoman"))
                {
                    textView.setTextSize(60);
                }
                if(font.equals("Verdana"))
                {
                    textView.setTextSize(10);
                }
            }
        });
        red.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                final String Textt = text.getText().toString();
                textView.setText(Textt);
                textView.setTextColor(Color.RED);
                if(bold.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.BOLD);
                }
                else if(italic.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.ITALIC);
                }
                else if(bold.isChecked()&&italic.isChecked())
                {
                    textView.setTypeface(Typeface.DEFAULT,Typeface.BOLD_ITALIC);
                }
                int rid =  radioGroup.getCheckedRadioButtonId();
                RadioButton radioButton = findViewById(rid);
                String font = radioButton.getText().toString();
                if(font.equals("Sans"))
                {
                    textView.setTextSize(40);
                }
                if(font.equals("TimesNewRoman"))
                {
                    textView.setTextSize(60);
                }
                if(font.equals("Verdana"))
                {
                    textView.setTextSize(10);
                }
            }
        });
    }
}
