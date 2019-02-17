package com.sree.mycompany.weatherapp;

import android.os.AsyncTask;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import org.json.JSONArray;
import org.json.JSONObject;

import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.StringReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class MainActivity extends AppCompatActivity {
    EditText city;
    TextView weatherdata;
    public class DownloadTask extends AsyncTask<String,Void,String>
    {

        @Override
        protected String doInBackground(String... urls) {
            String results ="";
            URL url;
            HttpURLConnection urlConnection;
            try {
                url = new URL(urls[0]);
                urlConnection = (HttpURLConnection) url.openConnection();
                InputStream is = urlConnection.getInputStream();
                InputStreamReader isr = new InputStreamReader(is);
                int data = isr.read();
                while (data!=-1)
                {
                    char current = (char) data;
                    results += current;
                    data = isr.read();
                }
                return results;
            }
            catch (Exception e)
            {
                e.printStackTrace();
                return null;
            }
        }

        @Override
        protected void onPostExecute(String s) {
            super.onPostExecute(s);
            try {
                JSONObject jsonObject = new JSONObject(s);
                String weatherInfo = jsonObject.getString("weather");
                JSONArray jsonArray = new JSONArray(weatherInfo);
                String message = "";
                for(int i=0; i<jsonArray.length();i++)
                {
                    JSONObject jsonPart = jsonArray.getJSONObject(i);
                   String main = jsonPart.getString("main");
                   String description  = jsonPart.getString("description");
                   if(!main.equals("")&&!description.equals(""))
                   {
                       message += main + " : " + description +"\r\n";
                   }
                }
                if(!message.equals(""))
                {
                    weatherdata.setText(message);
                }
            }
            catch (Exception e)
            {
                e.printStackTrace();
            }
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        city = findViewById(R.id.city);
        weatherdata = findViewById(R.id.weatherdata);
        Button find = findViewById(R.id.find);
        find.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DownloadTask downloadTask = new DownloadTask();
                downloadTask.execute("https://samples.openweathermap.org/data/2.5/weather?q="+city.getText().toString()+"&appid=b6907d289e10d714a6e88b30761fae22");
                city.setText("https://samples.openweathermap.org/data/2.5/weather?q="+city.getText().toString()+"&appid=b6907d289e10d714a6e88b30761fae22");
            }
        });

    }
}
