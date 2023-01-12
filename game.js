var score = 0;

document.getElementById("clicker").addEventListener("click", function(){
  score++;
  document.getElementById("score").innerHTML = score;
});
