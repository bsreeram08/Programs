package com.custlogin.login.fourfuncapps;

        import android.net.Uri;
        import android.os.Bundle;
        import android.app.Activity;
        import android.content.Intent;
        import android.view.Menu;
        import android.view.View;
        import android.view.View.OnClickListener;
        import android.widget.Button;
        import android.widget.EditText;
        import android.widget.Toast;

public class mainpage extends Activity {
    Button sms, call, btnurl, logout;
    EditText phno, message, urldataval;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_mainpage);
        sms = (Button) findViewById(R.id.sms);
        call = (Button) findViewById(R.id.call);
        btnurl = (Button) findViewById(R.id.urlbtn);
        logout = (Button) findViewById(R.id.logout);
        phno = (EditText) findViewById(R.id.phonenumber);
        String phoneno = phno.getText().toString();
        message = (EditText) findViewById(R.id.message);
        String messageval = message.getText().toString();
        urldataval = (EditText) findViewById(R.id.urldata);
        sms.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {

            }
        });
        call.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {

            }
        });
        btnurl.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {
                String data = urldataval.getText().toString();
                String urlstr = "https://" + data;
                Toast.makeText(mainpage.this, data,Toast.LENGTH_LONG ).show();
                Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(urlstr));
                startActivity(intent);
            }
        });
        logout.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {

            }
        });
    }

}

