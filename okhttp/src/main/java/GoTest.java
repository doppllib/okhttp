import android.util.Log;

import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.Socket;
import java.net.URI;
import java.net.URL;
import java.security.NoSuchAlgorithmException;

import javax.net.SocketFactory;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;

import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

/**
 * Created by kgalligan on 3/30/17.
 */

public class GoTest
{

    public static void main(String[] args) throws IOException, NoSuchAlgorithmException
    {
        heyo("http://droidcon-server.herokuapp.com/");
    }

    public static void heyo(String url) throws IOException, NoSuchAlgorithmException
    {
        SocketFactory socketFactory = SocketFactory.getDefault();
        logClass(socketFactory);
        Socket plainSocket = socketFactory.createSocket("droidcon-server.herokuapp.com", 80);
        logClass(plainSocket);

        URL obj = new URL(url);
        HttpURLConnection con = (HttpURLConnection) obj.openConnection();
        logClass(con);
        SSLSocketFactory sf = (SSLSocketFactory) SSLSocketFactory
                .getDefault();
        logClass(sf);
        SSLSocket socket = (SSLSocket)sf.createSocket("droidcon-server.herokuapp.com", 443);
        socket.startHandshake();

        SSLContext sslContext = SSLContext.getInstance("TLS");
        logClass(sslContext);

        OkHttpClient client = new OkHttpClient();
//                new OkHttpClient.Builder().sslSocketFactory(SSLSocketFactory.getDefault()
//        ).build();
        Request request = new Request.Builder()
                .url(url)
                .build();

        Response response = client.newCall(request).execute();
        String s = response.body().string();
        Log.w(GoTest.class.getSimpleName(), s);
    }

    private static void logClass(Object sf)
    {
        Log.w(GoTest.class.getSimpleName(), "type: "+ sf.getClass().getName());
    }
}
