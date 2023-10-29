document.getElementById('calculate').addEventListener('click', function() {
    const weight = parseFloat(document.getElementById('weight').value);
    const height = parseFloat(document.getElementById('height').value) / 100; // Convert height to meters
  
    if (isNaN(weight) || isNaN(height) || weight <= 0 || height <= 0) {
      Toastify({
        text: "Please enter valid weight and height.",
        duration: 3000,
        backgroundColor: "linear-gradient(to right, #ff416c, #ff4b2b)"
      }).showToast();
      return;
    }
  
    const bmi = weight / (height * height);
    let status, planId;
  
    if (bmi < 18.5) {
      status = "Underweight";
      planId = "underweight";
    } else if (bmi >= 18.5 && bmi < 25) {
      status = "Normal";
      planId = "normalweight";
    } else {
      status = "Overweight";
      planId = "overweight";
    }
  
    document.getElementById('result').innerText = `Your BMI is ${bmi.toFixed(2)}. Status: ${status}`;
  
    Toastify({
      text: `You are ${status}`,
      duration: 3000,
      backgroundColor: "linear-gradient(to right, #36D1DC, #5B86E5)"
    }).showToast();
  
    document.querySelectorAll('.plan').forEach(plan => plan.style.display = 'none');
    document.getElementById(planId).style.display = 'block';
  });
  