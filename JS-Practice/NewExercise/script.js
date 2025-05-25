document.getElementById('addItem').addEventListener('click', () => {
    const itemsDiv = document.getElementById('items');
    const newItem = document.createElement('div');
    newItem.classList.add('item');
    newItem.innerHTML = `
      <input type="text" placeholder="Item Name" class="itemName" required>
      <input type="number" placeholder="Quantity" class="itemQuantity" required>
      <input type="number" placeholder="Price" class="itemPrice" required>
      <button type="button" class="removeItem">Remove</button>
    `;
    itemsDiv.appendChild(newItem);
  
    // Add remove functionality
    newItem.querySelector('.removeItem').addEventListener('click', () => {
      itemsDiv.removeChild(newItem);
    });
  });
  
  document.getElementById('invoiceForm').addEventListener('submit', (e) => {
    e.preventDefault();
  
    const customerName = document.getElementById('customerName').value;
    const invoiceDate = document.getElementById('invoiceDate').value;
    const items = document.querySelectorAll('.item');
  
    let grandTotal = 0;
    const invoiceTableBody = document.querySelector('#invoiceTable tbody');
    invoiceTableBody.innerHTML = '';
  
    items.forEach(item => {
      const itemName = item.querySelector('.itemName').value;
      const quantity = parseFloat(item.querySelector('.itemQuantity').value);
      const price = parseFloat(item.querySelector('.itemPrice').value);
      const total = quantity * price;
  
      grandTotal += total;
  
      const row = document.createElement('tr');
      row.innerHTML = `
        <td>${itemName}</td>
        <td>${quantity}</td>
        <td>${price}</td>
        <td>${total}</td>
      `;
      invoiceTableBody.appendChild(row);
    });
  
    document.getElementById('outputCustomerName').textContent = customerName;
    document.getElementById('outputInvoiceDate').textContent = invoiceDate;
    document.getElementById('grandTotal').textContent = grandTotal;
  
    document.getElementById('invoiceOutput').classList.remove('hidden');
  });
  
  // Optional: Download as PDF
  document.getElementById('downloadPDF').addEventListener('click', () => {
    const invoiceOutput = document.getElementById('invoiceOutput');
    html2pdf().from(invoiceOutput).save();
  });