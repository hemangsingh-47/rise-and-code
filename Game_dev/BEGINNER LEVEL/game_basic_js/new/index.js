// Select the first <p> element in the document
var p = document.querySelector('p');
var div = document.querySelector('.div');

// Create a new <h1> element
var paracreate = document.createElement('h1');
paracreate.textContent = "hemang";

// Define a style object
const hstyle = {
    color: 'red',
    backgroundColor: 'blue',
    height: '20vh',
    display: 'flex',
    justifyContent: 'center',
    transition: 'all 0.6s ease-in',
    transform: 'translateY(10px)' // Fix: 'Transform' changed to 'transform' (case-sensitive)
};

// Apply styles from hstyle to the new <h1> element
Object.assign(paracreate.style, hstyle);

// Append the <h1> to the div (instead of body) — no need to append twice
div.appendChild(paracreate);

// Update inner content
paracreate.innerHTML = "hello pop";
