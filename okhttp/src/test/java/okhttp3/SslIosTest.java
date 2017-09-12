package okhttp3;
import org.junit.Assert;
import org.junit.Test;

import java.io.IOException;

/**
 * Created by kgalligan on 1/24/17.
 */

public class SslIosTest
{
    @Test
    public void testOpenConnection() throws IOException
    {
        String url = "http://droidcon-server.herokuapp.com/dataTest/scheduleData/61100";
        testCall(url);
    }

    @Test
    public void testSslConnection() throws IOException
    {
        String url = "https://droidcon-server.herokuapp.com/dataTest/scheduleData/61100";
        testCall(url);
    }

    private void testCall(String url) throws IOException
    {
        OkHttpClient client = new OkHttpClient();
        Request request = new Request.Builder()
                .url(url)
                .build();

        Response response = client.newCall(request).execute();
        String responseBody = response.body().string();

        Assert.assertTrue(responseBody.contains("Droidcon NYC"));
    }
}
