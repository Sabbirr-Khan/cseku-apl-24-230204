// Filename: PaymentProcessor.java
package Task2;

import java.util.ArrayList;
import java.util.List;

//***********************************************************************
// Class: PaymentProcessor
// Handles payment processing, ensuring accurate and timely payments.
// Applied Principles:
// - Single Responsibility Principle (SRP): Focused solely on processing payments
// - Open/Closed Principle (OCP): Extensible for different payment methods without modifying existing code
//***********************************************************************

public class PaymentProcessor {
    private List<Invoice> processedInvoices = new ArrayList<>();

    public void processPayment(int clientId, int projectId, double amount) {
        Invoice invoice = new Invoice(clientId, projectId, amount);
        processedInvoices.add(invoice);
        System.out.println("Payment processed for Client ID: " + clientId + ", Project ID: " + projectId + ", Amount: " + amount);
    }

    public List<Invoice> getProcessedInvoices() {
        return processedInvoices;
    }
}
