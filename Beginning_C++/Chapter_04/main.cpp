#include <iostream>

struct task {
    task *next;
    std::string description;
};

void add(const std::string description, const std::string afterDescription);
void append(const std::string description);
void cleanup();
task *find(const std::string description);

task *HEAD = nullptr, *TAIL = nullptr;

task *find(const std::string description) {
    task *t = HEAD;
    while(t != nullptr) {
        if(t->description == description) {
            return t;
        }
        t = t->next;
    }
    return nullptr;
}

void add(const std::string description, const std::string afterDescription) {
    task *aftask = find(afterDescription);
    if(aftask == nullptr) {
        append(description);
        return;
    }
    // if not appended, must fix it in
    task *t = new task;
    t->description = description;
    t->next = aftask->next;
    aftask->next = t;

}

void append(const std::string description) {
    // construct the task
    task *t = new task;
    t->next = nullptr;
    t->description = description;

    // if list is empty, place this at the HEAD
    if(HEAD == nullptr) {
        HEAD = TAIL = t;
        return;
    }
    // add to the end
    TAIL->next = t;
    TAIL = t;
}

void cleanup() {

    // clean-up
    task *t = HEAD;
    while(t != nullptr) {
        std::cout << t->description << std::endl;
        task *next = t->next;
        delete t;
        t = next;
    }
}

int main(int argc, char *argv[]) {

    append("Genesis task");
    append("1st task");
    append("2nd task");
    add("0th task", "Genesis task");
    cleanup();
    std::cout << "Done..." << std::endl;
    return 0;
}