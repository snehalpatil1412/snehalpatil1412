document.addEventListener('DOMContentLoaded', function() {
    const addContentButton = document.getElementById('addContentButton');
    const contentForm = document.querySelector('.content-form');
    const contentList = document.getElementById('contentList');
    const saveButton = document.getElementById('saveButton');
    const cancelButton = document.getElementById('cancelButton');
    const titleInput = document.getElementById('titleInput');
    const contentInput = document.getElementById('contentInput');
  
    let contentId = 1;
  
    addContentButton.addEventListener('click', function() {
      contentForm.style.display = 'block';
    });
  
    saveButton.addEventListener('click', function() {
      const title = titleInput.value;
      const content = contentInput.value;
      if (title && content) {
        createContent(title, content);
        clearForm();
        contentForm.style.display = 'none';
      } else {
        alert('Please fill in both title and content');
      }
    });
  
    cancelButton.addEventListener('click', function() {
      clearForm();
      contentForm.style.display = 'none';
    });
  
    function createContent(title, content) {
      const contentDiv = document.createElement('div');
      contentDiv.classList.add('content');
      contentDiv.innerHTML = `
        <h2>${title}</h2>
        <p>${content}</p>
      `;
      contentList.appendChild(contentDiv);
    }
  
    function clearForm() {
      titleInput.value = '';
      contentInput.value = '';
    }
  });
  