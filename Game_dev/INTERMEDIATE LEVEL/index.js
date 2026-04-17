var todoList = JSON.parse(localStorage.getItem("data")) || [];
var comdoList = [];
var remList = [];

var addButton = document.getElementById("add-button");
var todoInput = document.getElementById("todo-input");
var deleteAllButton = document.getElementById("delete-all");
var deleteSButton = document.getElementById("delete-selected");
var allTodos = document.getElementById("all-todos");

// ---------- EVENTS ----------
addButton.addEventListener("click", add);
deleteAllButton.addEventListener("click", deleteAll);
deleteSButton.addEventListener("click", deleteSelected);

todoInput.addEventListener("keypress", (e) => {
  if (e.key === "Enter") add();
});

document.addEventListener("click", (e) => {
  if (e.target.closest(".complete")) completeTodo(e);
  if (e.target.closest(".delete")) deleteTodo(e);

  if (e.target.id === "all") viewAll();
  if (e.target.id === "rem") viewRemaining();
  if (e.target.id === "com") viewCompleted();
});

// ---------- FUNCTIONS ----------

function update() {
  comdoList = todoList.filter(t => t.complete);
  remList = todoList.filter(t => !t.complete);

  document.getElementById("r-count").innerText = todoList.length;
  document.getElementById("c-count").innerText = comdoList.length;

  localStorage.setItem("data", JSON.stringify(todoList));
}

function add() {
  let value = todoInput.value.trim();
  if (value === "") {
    alert("Task cannot be empty");
    return;
  }

  todoList.push({
    task: value,
    id: Date.now().toString(),
    complete: false
  });

  todoInput.value = "";
  update();
  render(todoList);
}

function render(list) {
  allTodos.innerHTML = "";

  list.forEach(item => {
    allTodos.innerHTML += `
      <li id="${item.id}" class="todo-item">
        <p class="task ${item.complete ? "line" : ""}">
          ${item.task}
        </p>
        <div class="todo-actions">
          <button class="complete btn btn-success">✔</button>
          <button class="delete btn btn-error">❌</button>
        </div>
      </li>
    `;
  });
}

function deleteTodo(e) {
  let id = e.target.closest("li").id;
  todoList = todoList.filter(t => t.id !== id);
  update();
  render(todoList);
}

function completeTodo(e) {
  let id = e.target.closest("li").id;
  todoList.forEach(t => {
    if (t.id === id) t.complete = !t.complete;
  });
  update();
  render(todoList);
}

function deleteAll() {
  todoList = [];
  update();
  render(todoList);
}

function deleteSelected() {
  todoList = todoList.filter(t => !t.complete);
  update();
  render(todoList);
}

// ---------- FILTERS ----------
function viewCompleted() {
  render(comdoList);
}

function viewRemaining() {
  render(remList);
}

function viewAll() {
  render(todoList);
}

// ---------- INIT ----------
update();
render(todoList);
