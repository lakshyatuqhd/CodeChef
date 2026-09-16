<!DOCTYPE html>
<html>
<head>
    <title>Favorite Color Form</title>
</head>
<body>
    <h1>What is your favorite color?</h1>
    <form action="/favorite-color" method="POST">
        <label for="color">Favorite Color:</label><br>
        <input type="text" id="color" name="color"><br><br>
        <button type="submit">Submit</button>
    </form>

    <% if (typeof favoriteColor !== 'undefined') { %>
        <p>Your favorite color is: <%= favoriteColor %></p>
    <% } %>
</body>
</html>
