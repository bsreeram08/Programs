package com.mycompany.sree.audioplay;

import android.media.AudioManager;
import android.media.MediaPlayer;
import android.os.Message;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.SeekBar;

import java.util.Timer;
import java.util.TimerTask;

public class MainActivity extends AppCompatActivity {
    MediaPlayer mediaPlayer;
    SeekBar seekbar,songseekbar;
    AudioManager audioManager;
    public void playbtn(View view)
    {
        mediaPlayer.start();
    }
    public void pausebtn(View view)
    {
        mediaPlayer.pause();
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        audioManager=(AudioManager)getSystemService(AUDIO_SERVICE);
        mediaPlayer = MediaPlayer.create(this,R.raw.figure09);
        seekbar=(SeekBar)findViewById(R.id.VolumeseekBar);
        songseekbar=(SeekBar)findViewById(R.id.seekBar);
        int maxVolume = audioManager.getStreamMaxVolume(AudioManager.STREAM_MUSIC);
        int currentVolume=audioManager.getStreamVolume(AudioManager.STREAM_MUSIC);
        seekbar.setMax(maxVolume);
        songseekbar.setMax(mediaPlayer.getDuration());
        seekbar.setProgress(currentVolume);
        seekbar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                audioManager.setStreamVolume(AudioManager.STREAM_MUSIC,progress,0);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {

            }
        });
        songseekbar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                mediaPlayer.seekTo(progress);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {
                mediaPlayer.pause();

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
                mediaPlayer.start();
            }
        });
        new Timer().scheduleAtFixedRate(new TimerTask() {
            @Override
            public void run() {
                songseekbar.setProgress(mediaPlayer.getCurrentPosition());
            }
        },0,300);
    }
}
