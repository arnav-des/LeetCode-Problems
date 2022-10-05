/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     int binaryToDecimal(int n)
// {
//     int num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int temp = num;
//     while (temp) {
//         int last_digit = temp % 10;
//         temp = temp / 10;
 
//         dec_value += last_digit * base;
 
//         base = base * 2;
//     }
 
//     return dec_value;
// }
//     int getDecimalValue(ListNode* head) {
//         int n=0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             n=n*10+temp->val;
//             temp=temp->next;
            
//         }
//         return binaryToDecimal(n);
//     }
// };
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       vector<int>ans;
       while(head != NULL){
           ans.push_back(head->val);
           head = head->next;
       }
        int sum = 0;
        int x = 0;
        for(int i = ans.size()-1; i>= 0; i--){
           sum+=(pow(2,x)*ans[i]);
            x++;
       }
        return sum;
    }
};