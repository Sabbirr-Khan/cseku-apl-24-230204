// Filename: ClientManagement.java
package Task2;

import java.util.HashMap;
import java.util.Map;

//***********************************************************************
// Class: ClientManagement
// Manages operations related to clients, including adding, retrieving, and removing clients.
// Applied Principles:
// - Single Responsibility Principle (SRP): Focused solely on client management
// - Interface Segregation Principle (ISP): Separate functionality for client management from other responsibilities
//***********************************************************************

public class ClientManagement {
    private Map<Integer, Client> clients = new HashMap<>();

    public void addClient(int id, String name, String email) {
        clients.put(id, new Client(id, name, email));
    }

    public Client getClient(int id) {
        return clients.get(id);
    }

    public void removeClient(int id) {
        clients.remove(id);
    }
}

