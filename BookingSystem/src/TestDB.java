public class TestDB {

    public static void main(String[] args) {

        // Test inserting a user
        DatabaseHelper.insertUser("Yug Soni", "yug@example.com", "mypassword123");

        // Test login
        DatabaseHelper.validateLogin("yug@example.com", "mypassword123");

    }
}