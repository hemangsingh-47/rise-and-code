const scoreDisplay = document.querySelector('#score');
const timeLeftDisplay = document.querySelector('#timeLeft');
const maxScoreDisplay = document.querySelector('#maxScore');
const startBtn = document.querySelector('#startBtn');
const holes = document.querySelectorAll('.hole');
const moles = document.querySelectorAll('.mole');

// Required variables
let score = 0;
let time = 30;
let bestScore = 0;
let gameId = null;

// Call on every game start
function webLoad() {
    displayContent();
    onLoad();
}

// Step 1: Load stored high score
function onLoad() {
    const temp = localStorage.getItem('highScoreGame');
    if (temp !== null) {
        bestScore = parseInt(temp);
    } else {
        bestScore = 0;
    }
}

// Step 2: Reflect actual values in HTML
function displayContent() {
    scoreDisplay.textContent = score;
    timeLeftDisplay.textContent = time;
    maxScoreDisplay.textContent = bestScore;
}

// Call webLoad function on page load
webLoad();

// Random time generator implementation
function randomTimeGenerator(min, max) {
    return Math.floor(Math.random() * (max - min) + min);
}

// Randomly select a hole
function randomIndex() {
    const index = Math.floor(Math.random() * holes.length);
    return holes[index];
}

// Pop game implementation (moles appear/disappear)
function popImageGame() {
    const randomTime = randomTimeGenerator(500, 1500);
    const hole = randomIndex();
    const mole = hole.querySelector('.mole');

    mole.classList.add("up");

    setTimeout(() => {
        mole.classList.remove("up");
        if (time > 0) popImageGame();
    }, randomTime);
}

// End game implementation
function endGame() {
    clearInterval(gameId);

    if (score > bestScore) {
        bestScore = score;
        localStorage.setItem('highScoreGame', bestScore);
        alert(`🎉 You scored higher than before! New High Score: ${score}`);
    } else {
        alert(`Your final score is ${score}!`);
    }

    // Reset values
    score = 0;
    time = 30;
    displayContent();
    startBtn.disabled = false;
}

// Start game implementation
function startGame() {
    score = 0;
    time = 30;
    startBtn.disabled = true;

    gameId = setInterval(() => {
        time--;
        displayContent();

        if (time <= 0) {
            endGame();
        }
    }, 1000);

    popImageGame();
}

// Bonk function (when mole is clicked)
function bonk(event) {
    if (event.target.classList.contains('up')) {
        score++;
        event.target.classList.remove('up');
        event.target.classList.add('bonked');

        setTimeout(() => {
            event.target.classList.remove('bonked');
        }, 300);

        displayContent();
    }
}

// Event listeners
startBtn.addEventListener("click", startGame);

moles.forEach(mole => {
    mole.addEventListener('click', bonk);
});
