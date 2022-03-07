if (!localStorage.getItem('todoTasks')) {
    localStorage.setItem('todoTasks', '[]');
}

let todoTasks = JSON.parse(localStorage.getItem('todoTasks'));
const tasksDiv = document.getElementById('tasks');
const textarea = document.getElementById('textarea');

renderTasks();

textarea.onkeyup = event => {
    if (event.key === 'Enter') {
        let titleValue = textarea.value.trim();
        textarea.value = '';
        if (titleValue.length === 0) {
            return;
        }
        let task = {
            title: titleValue,
            completed: false
        }
        todoTasks.push(task);
        localStorage.setItem('todoTasks', JSON.stringify(todoTasks));
        renderTasks();
    }
}

function renderTasks() {
    tasksDiv.innerHTML = '';
    for (let i = 0; i < todoTasks.length; ++i) {
        createTask(i, todoTasks[i]);
    }
}

function createTask(taskId, task) {
    const newTask = document.createElement('div');
    newTask.classList.add('task');
    newTask.dataset.taskId = taskId;

    const checkboxInput = document.createElement('input');
    checkboxInput.setAttribute('type', 'checkbox');
    checkboxInput.checked = task.completed;
    checkboxInput.id = `task${taskId}`;
    checkboxInput.addEventListener('change', markAsComplete);

    const taskTitle = document.createElement('span');
    taskTitle.classList.add('task-title');
    taskTitle.textContent = task.title;

    const editBtn = document.createElement('span');
    editBtn.classList.add('edit');
    editBtn.textContent = '✏';
    editBtn.addEventListener('click', editTask);

    const deleteBtn = document.createElement('span');
    deleteBtn.classList.add('btn');
    deleteBtn.textContent = 'x';
    deleteBtn.addEventListener('click', deleteTask);

    newTask.appendChild(checkboxInput);
    newTask.appendChild(taskTitle);
    newTask.appendChild(editBtn);
    newTask.appendChild(deleteBtn);
    tasksDiv.appendChild(newTask);
}

function markAsComplete(e) {
    let index = e.target.parentElement.dataset.taskId;
    todoTasks[index].completed = e.target.checked;
    localStorage.setItem('todoTasks', JSON.stringify(todoTasks));
    renderTasks();
}

function deleteTask(e) {
    let index = e.target.parentElement.dataset.taskId;
    todoTasks.splice(index, 1);
    localStorage.setItem('todoTasks', JSON.stringify(todoTasks));
    renderTasks();
}

function editTask(e) {
    let index = e.target.parentElement.dataset.taskId;
    let updatedTitle = prompt('Edit Task', todoTasks[index].title);
    if (updatedTitle === null) {
        return;
    }
    todoTasks[index].title = updatedTitle;
    localStorage.setItem('todoTasks', JSON.stringify(todoTasks));
    renderTasks();
}
