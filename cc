<!DOCTYPE html>
<html>
<head>
  <title>CPU Auto Stress Test</title>
</head>
<body>
  <h1>🔥 CPU Stress Test Running</h1>
  <p>أقفل التبويب لإنهاء الضغط.</p>
  <script>
    function burn() {
      while (true) Math.sqrt(Math.random());
    }
    const cores = navigator.hardwareConcurrency || 4;
    for (let i = 0; i < cores; i++) {
      setTimeout(burn, 0);
    }
  </script>
</body>
</html>
