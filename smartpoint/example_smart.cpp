#include <iostream>
#include <memory>
#include <future>
#include <mutex>
#include <atomic>
#include <unordered_map>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace chrono_literals;

// insert key(int) value(string)
// class DataBase
// 저장용 컨테이너 - unordered map 참조에 특화된
// 내부 동기화를 위한 락 구조 설계
// 컬럼 추가(타입 정하기) 템플릿?

class DataBase{
    private:
        unordered_map<int , string> row_;
    public:
        DataBase(){}
        ~DataBase(){}
        DataBase(const DataBase& row) : row_(){}
        DataBase(const int&& key , const string&& value) noexcept : row_(){
            cout << "이동 생성자 호출" << endl;
        }
        void select_star_from_db(){
            for (auto & [key , value] : row_){
                cout << key << " : " << value << endl;
            }
            return;
        }
        void insert_query(int key , string value){
            row_[key] = value;
        }
        vector<string> find_query(int findKey){
            vector<string> val;
            for (auto & [key , value] : row_){
                if(findKey == key){
                    val.push_back(value);
                    cout << key << "번째 데이터의 값은 " << value << "입니다." << endl;
                }
            }
            return val;
        }
        void remove_query(int rmKey){
            vector<string> val;
            for (auto & [key , value] : row_){
                if(rmKey == key){
                    row_.erase(key);
                    cout << rmKey << "번째 데이터가 삭제되었습니다." << endl;
                }
            }
            return;
        }
};

int main()
{
    DataBase mydb;

    mydb.insert_query(1 , "정영재");
    mydb.insert_query(2 , "박해준");
    mydb.insert_query(3 , "정석준");
    mydb.insert_query(4 , "박어진");
    mydb.insert_query(5 , "박재형");
    mydb.select_star_from_db();
    mydb.find_query(2);
    mydb.remove_query(4);
    mydb.select_star_from_db();
    return 0;
}
