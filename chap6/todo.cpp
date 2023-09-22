#include <array>
#include <fstream>
#include <ios>
#include <iostream>
#include <limits>
#include <vector>

int main()
{
    const char FILENAME[]{"todo_list.txt"};
    const int MAX_TASKS{100};
    const char COMPLETED_MARK{'X'};

    std::vector<std::array<char, MAX_TASKS>> taskNames;
    std::vector<bool> taskCompleted;

    int taskCount = 0;

    std::cout << "Welcome to your to-do list!" << std::endl << std::endl;

    std::fstream file(FILENAME);

    if (file.is_open())
    {
        char line[MAX_TASKS + 2];
        while (file.getline(line, sizeof(line)) && taskCount < MAX_TASKS)
        {
            int len = 0;
            bool bCompleted{false};
            std::array<char, MAX_TASKS> task;
            while (len < MAX_TASKS - 1 && line[len] != '\n' && line[len] != '\0')
            {
                if (line[len] == COMPLETED_MARK)
                {
                    bCompleted = true;
                    break;
                }
                else
                {
                    task[len] = line[len];
                }

                len++;
            }
            task[len] = '\0';

            taskNames.push_back(task);
            taskCompleted.push_back(bCompleted);
            ++taskCount;
        }
        file.close();
        std::cout << "Data loaded from file." << std::endl << std::endl;
    }
    else
    {
        std::cout << "No saved data found." << std::endl << std::endl;
    }

    bool bShouldRun{true};

    while (bShouldRun)
    {
        std::cout << "Please select an option:" << std::endl;
        std::cout << "1. Add an item" << std::endl;
        std::cout << "2. Show me what I need to do" << std::endl;
        std::cout << "3. Mark an item as completed" << std::endl;

        int option;
        std::cout << "Your choice: ";
        std::cin >> option;
        std::cout << " " << std::endl;

        switch (option)
        {
            case 1:
                // Code to add a new task
                if (taskCount < MAX_TASKS)
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::array<char, MAX_TASKS> task;
                    std::cout << "Enter a task name: ";
                    std::cin.getline(task.data(), MAX_TASKS);
                    taskNames.push_back(task);
                    taskCompleted.push_back(false);
                    taskCount++;
                    std::cout << "Task added." << std::endl << std::endl;
                }
                else {
                    std::cout << "Your to-do list is full." << std::endl;
                }
                break;
            case 2:
                if (taskCount == 0)
                {
                    std::cout << "Your to-do list is empty." << std::endl;
                }
                else 
                {
                    std::cout << "Your to-do list:" << std::endl << std::endl;
                    for (size_t i = 0; i < taskCount; i++)
                    {
                        std::cout << (i + 1) << ". ";
                        for (size_t j = 0; j < MAX_TASKS && taskNames[i][j] != '\0'; j++)
                        {
                            std::cout << taskNames[i][j];
                        }
                        std::cout << " [" << (taskCompleted[i] ? COMPLETED_MARK : ' ') << "]" << std::endl;
                    }
                    std::cout << "" << std::endl;
                }
                break;
            case 3:
                if (taskCount == 0)
                {
                    std::cout << "Your to-do list is empty." << std::endl << std::endl;
                }
                else
                {
                    std::cout << "Enter the number of the task to mark as completed: ";
                    int index;
                    std::cin >> index;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "" << std::endl;
                    if (index > 0 && index <= taskCount)
                    {
                        taskCompleted[index - 1] = true;
                        std::cout << "Task marked as completed." << std::endl << std::endl;
                    }
                    else
                    {
                        std::cout << "Invalid task number." << std::endl << std::endl;
                    }
                }
                break;
            case 4:
                // Code to save the data to a file
                break;
            case 5:
                // Code to exit the program
                break;
            default:
                std::cout << "Invalid option" << std::endl;
        }
    }
    return 0;
}
