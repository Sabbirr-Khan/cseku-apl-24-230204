// Filename: Main.java
package Task2;

//***********************************************************************
// Title: Freelancer Portfolio and Client Management System
// Authors: Md. Sabbir Khan, Md. Kawser Ahmed
// Description: Main class to manage the entire system and coordinate all functionalities.
// Applied Principles:
// - Dependency Inversion Principle (DIP): Depends on abstractions, not concrete implementations
// - Single Responsibility Principle (SRP): Dedicated to initializing and running the system
//***********************************************************************

public class Main {
    private ClientManagement clientManagement;
    private ProjectManagement projectManagement;
    private Portfolio portfolio;
    private FreelancerDetails freelancerDetails;
    private Billing billing;
    private UserInterface userInterface;
    private Authentication authentication;
    private Notification notification;
    private Report report;

    public Main() {
        clientManagement = new ClientManagement();
        projectManagement = new ProjectManagement();
        portfolio = new Portfolio();
        freelancerDetails = new FreelancerDetails();
        billing = new Billing();
        userInterface = new UserInterface();
        authentication = new Authentication();
        notification = new Notification();
        report = new Report();
    }

    public void run() {
        System.out.println("Running Freelancer Portfolio and Client Management System...");
        userInterface.displayMenu();
        // Additional logic to handle input and coordinate between classes
    }

    public static void main(String[] args) {
        Main system = new Main();
        system.run();
    }
}
