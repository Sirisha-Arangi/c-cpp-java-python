//public class App {
  //  public static void main(String[] args) {
    //    System.out.println("Hello from Java!");
  //  }
//}
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        try {
            // Call Python Flask API at python-service:5000/hello
            URL url = new URL("http://python-service:5000/hello");
            HttpURLConnection conn = (HttpURLConnection) url.openConnection();
            conn.setRequestMethod("GET");

            Scanner sc = new Scanner(conn.getInputStream());
            while (sc.hasNext()) {
                System.out.println(sc.nextLine());
            }
            sc.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
