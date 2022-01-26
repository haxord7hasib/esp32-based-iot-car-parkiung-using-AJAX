const char MAIN_page[] PROGMEM = R"=====(

<!DOCTYPE html>
<html>

<style>
.card1{
     max-width: 400px;
     min-height: 250px;
     background: #000000;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
     position: relative;
     bottom: 0px;
     right: 0;
     width: 400px;
     left:0px;
}

.card2{
     max-width: 400px;
     min-height: 250px;
     background: #000000;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
     position: relative;
     bottom: 282px;
     right: 0;
     width: 410px;
     left:410px;
}
.card3{
     max-width: 400px;
     min-height: 250px;
     background: #000000;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
     position: relative;
     bottom: 564px;
     right: 0;
     width: 410px;
     left:820px;
}

.card4{
     max-width: 400px;
     min-height: 250px;
     background: #000000;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
     position: relative;
     bottom: 844px;
     right: 0;
     width: 410px;
     left:1230px;
}

.card5{
     max-width: 400px;
     min-height: 250px;
     background: #000000;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
     position: relative;
     bottom: 834px;
     right: 0;
     width: 410px;
     left:410px;
}

.card6{
     max-width: 400px;
     min-height: 250px;
     background: #000000;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
     position: relative;
     bottom: 1114px;
     right: 0;
     width: 410px;
     left:820px;
}
</style>
<body>
 
<div class="card1">
  <h1><p> CAR SLOT 1 </p></h1><br>
  <h2>STATUS : <span id="ADCValue1">0</span></h2><br>
  <br>
</div>
<div class="card2">
  <h1><p> CAR SLOT 2 </p></h1><br>
  <h2>STATUS : <span id="ADCValue2">0</span></h2><br>
  <br>
</div>
<div class="card3">
  <h1><p> CAR SLOT 3 </p></h1><br>
  <h2>STATUS : <span id="ADCValue3">0</span></h2><br>
  <br>
</div>

<div class="card4">
  <h1><p> CAR SLOT 4 </p></h1><br>
  <h2>STATUS : <span id="ADCValue4">0</span></h2><br>
  <br>
</div>
<div class="card5">
  <h1><p> CAR SLOT 5 </p></h1><br>
  <h2>STATUS : <span id="ADCValue5">0</span></h2><br>
  <br>
</div>
<div class="card6">
  <h1><p> CAR SLOT 6 </p></h1><br>
  <h2>STATUS : <span id="ADCValue6">0</span></h2><br>
  <br>
</div>
<script>

setInterval(function() {
  // Call a function repetatively with 2 Second interval
  getData1();
  getData2();
  getData3();
  getData4();
  getData5();
  getData6();
  
}, 10); //2000mSeconds update rate

function getData1() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue1").innerHTML =
      this.responseText;
    }
  
  };
  xhttp.open("GET", "readADC1", true);
  xhttp.send();
 
}


function getData2() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue2").innerHTML =
      this.responseText;
    }
  
  };
  xhttp.open("GET", "readADC2", true);
  xhttp.send();
 
}

function getData3() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue3").innerHTML =
      this.responseText;
    }
  
  };
  xhttp.open("GET", "readADC3", true);
  xhttp.send();
 
}


function getData4() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue4").innerHTML =
      this.responseText;
    }
  
  };
  xhttp.open("GET", "readADC4", true);
  xhttp.send();
 
}


function getData5() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue5").innerHTML =
      this.responseText;
    }
  
  };
  xhttp.open("GET", "readADC5", true);
  xhttp.send();
 
}

function getData6() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue6").innerHTML =
      this.responseText;
    }
  
  };
  xhttp.open("GET", "readADC6", true);
  xhttp.send();
 
}


</script>
</body>
</html>

)=====";
