#include <iostream>
#include <coroutine>
using namespace std;

struct Task
{
    struct promise_type
    {
        Task get_return_object() { return {}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::exit(1); }
    };
};

Task simpleCoroutine()
{
    cout << "Coroutine started" << endl;

    cout << "Coroutine resumed" << endl;
    co_return;
}
int main()
{
    auto handle = simpleCoroutine();
    cout << "Main function continues..." << endl;

    cout << "Main function ends." << endl;
    return 0;
}