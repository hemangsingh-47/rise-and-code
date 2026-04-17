const currentScoreDisplay = document.querySelector('#currentScore');
const highScoreDisplay = document.querySelector('#highScore');

const timerDisplay = document.querySelector('#timer');

const clickButton = document.querySelector('#clickButton');
const startButton = document.querySelector('#startButton');
const resetButton = document.querySelector('#resetButton');

const statusMessage = document.querySelector('#statusMessage');




let currentScore = 0; 
let highScore = 0; 
let timeRemaining = 10; 
let gameTimerId = null; 
let isGameActive = false; 
let clickButtonScale = 1.0; 
const MAX_SCALE = 2.0;  


function initializeGame() {
    loadHighScore();
    updateDisplay();
}


function loadHighScore() {
    const savedHighScore = localStorage.getItem('clickGameHighScore');

    if (savedHighScore !== null) {
        highScore = parseInt(savedHighScore);
    } else {
        highScore = 0;
    }
}

function saveHighScore() {
    localStorage.setItem('clickGameHighScore', currentScore);
    highScore = currentScore;
}


//  TASK- 1 = Click Counter Turns Red When > 20 (UNCHANGED)
function updateDisplay() {
    if (currentScore > 20) {
        currentScoreDisplay.style.color = "red";
    }
    currentScoreDisplay.innerText = currentScore;
    highScoreDisplay.innerText = highScore;
    timerDisplay.innerText = timeRemaining;
}


function updateStatus(message) {
    statusMessage.innerText = message;
}



// TASK - 2 =  "Click Me!" Message Flashes on Start (UPDATED)
function startGame() {
    startButton.disabled = true;
    clickButton.disabled = true;

    updateStatus('Get ready... Click me!');
    clickButtonScale = 1.0;
    clickButton.style.transform = 'scale(1.0)';

    setTimeout(function () {
        currentScore = 0;
        timeRemaining = 10;
        isGameActive = true;

        clickButton.disabled = false;

        updateDisplay();
        updateStatus('Game in progress... Click fast!');

        gameTimerId = setInterval(function () {
            timeRemaining--;
            updateDisplay();

            if (timeRemaining <= 0) {
                endGame();
            }
        }, 1000);
    }, 1000);
}


function endGame() {

    clearInterval(gameTimerId);
    gameTimerId = null;
    isGameActive = false;

const CPS = (currentScore / 10);
    clickButton.disabled = true;
    startButton.disabled = false;

    clickButtonScale = 1.0;
    clickButton.style.transform = 'scale(1.0)';

    //TASK5 t: After game ends, change Start button text to "Play Again"
    startButton.innerText = "Play Again"

    if (currentScore > highScore) {
        saveHighScore();
        updateStatus(`🎉 New High Score: ${currentScore}! Amazing!. You clicked ${CPS} times per second!`);
    } else {
        updateStatus(`Game Over! Your score: ${currentScore}. You clicked ${CPS} times per second!`);
    }

    updateDisplay();
}





function handleClick() {
    if (isGameActive) {
        currentScore++;
        updateDisplay();

       
    // TASK - 3 =  Button Grows When You Click
        let newScale = clickButtonScale * 1.1;

        
        if (newScale > MAX_SCALE) {
            newScale = MAX_SCALE;
        }

        clickButtonScale = newScale;
        clickButton.style.transform = `scale(${clickButtonScale})`;
    }
}


function resetHighScore() {
    const confirmed = confirm('Are you sure you want to reset your high score?');

    if (confirmed) {
        localStorage.removeItem('clickGameHighScore');
        highScore = 0;
        updateDisplay();
        updateStatus('High score has been reset!');
    }
}



clickButton.addEventListener('click', handleClick);

startButton.addEventListener('click', startGame);

resetButton.addEventListener('click', resetHighScore);




initializeGame();