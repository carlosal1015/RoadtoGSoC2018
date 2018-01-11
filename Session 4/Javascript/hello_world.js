<!DOCTYPE html>
<html>
    <head>

        <script type="application/javascript">
        function greeting () {
            document.getElementById ("greeting").innerHTML = ("O hai!");
        }
        </script>

        <!-- Very basic CSS style using the GNOME font -->
        <style type="text/css">
            body {
                font-face: Cantarell, sans-serif;
                text-align: center; }
        </style>

    </head>
    <body>
        <br /> <br />
        <button type="button" onclick="greeting()">Hello, GNOME!</button>
        <h1 id="greeting"></h1>
    </body>
</html>
