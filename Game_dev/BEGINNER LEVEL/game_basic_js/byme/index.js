var currentScore = document.querySelector('#currentScore');
var highScore = document.querySelector('#highScore');
var timer = document.querySelector('#timer');
var clickButton = document.querySelector('#clickButton');
var startButton = document.querySelector('#startButton');
var statusMessage = document.querySelector('#statusMessage');
var resetButton = document.querySelector('#resetButton');
var pauseButton = document.querySelector('#pauseButton');
var resumeButton = document.querySelector('#resumeButton');

var current = 0;
var high = 0;
var timer1 = 10;
var flag = false;
var timeId = null;
 function statusmsg(msg){
     statusMessage.textContent = msg;
 }



function loadData() {     //get item only key
  var temp = localStorage.getItem('highScore');
  if (temp !== null) {
    high = temp; 
  } else {
    high = 0;
  }
}

function onWeb(){
    loadData();
    displayContent();
}

function displayContent() {
  currentScore.textContent = current;
  highScore.textContent = high;
  timer.textContent = timer1;
}

function startGame() {
  clickButton.disabled = false;
  clickButton.style.backgroundColor = "red";
  clickButton.style.color = "white";
   timer1 = 10;
  current = 0;
  flag = true;
  pauseButton.disabled=false;
  startButton.disabled=true;
statusmsg("Game started! Click as fast as you can!");

  timeId = setInterval(function () {
    timer1--;
    if (timer1 <= 0) {
      endGame();
    }
    displayContent();
  }, 1000);
}

function userClick() {
  if (flag) {
    current++;
    displayContent();
  }
}

function endGame() {
  clearInterval(timeId); // set intv ko stop karrne ke liye
  flag = false;
  clickButton.disabled = false;
  resumeButton.style.display = 'none';
  pauseButton.disabled = true;
  startButton.disabled=false

  if (current > high) {
    high = current; 
    localStorage.setItem('highScore', high); 
    statusmsg("🎉 New High Score!");
  
  } else {
    statusmsg(`Your current score is ${current}`);
  }
 displayContent();
}

function resetGame() {
  localStorage.removeItem('highScore');
  current = 0;
  high = 0;
  timer1 = 10;
  displayContent();
  statusmsg("High score has been reset!");
}

function pauseGame() {
  clearInterval(timeId);
  flag = false;
  clickButton.disabled = true;
  pauseButton.disabled = true;
  statusmsg("Game Paused!");
  resumeButton.style.display = 'block';
}

function resumeGame() {
  if (!flag && timer1 > 0) {
    clickButton.disabled = false;
    pauseButton.disabled = false;
    startButton.disabled = true;
    flag = true;
    statusmsg("Game Resumed!");
    resumeButton.style.display = 'none';
    timeId = setInterval(function () {
      timer1--;
      if (timer1 <= 0) {
        endGame();
      }
      displayContent();
    }, 1000);
  }
}

onWeb();

startButton.addEventListener('click', startGame);
clickButton.addEventListener('click', userClick);
resetButton.addEventListener('click', resetGame);
pauseButton.addEventListener('click', pauseGame);
resumeButton.addEventListener('click', resumeGame);