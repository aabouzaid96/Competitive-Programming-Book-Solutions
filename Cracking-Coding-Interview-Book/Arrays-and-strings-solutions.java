### 1.1 
Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?

##Solution 1
// using Set Data Structure
//time O(n)  space O(n)
// using additional data structure
Boolean isUniqueString(String str){
        Set<Character> S=new HashSet<>();
        for (char c :s.toCharArray()) {
            S.add(c);
        }
    return S.size() == str.length();
}
--------------------------------------
##Solution 2
// using bet-vector
//time O(n)  space O(0)
// without additional data structure
Boolean isUniqueString(String s){
        // use int because of it consist of 128 bit, if constraint become bigger we can use long
        int checker = 0;
        for (char c :s.toCharArray()) {
            int charAcii= c;
          // check if the current bit is true or false
            if((checker & (1 << charAcii)) > 0){
                return false;
            }
           // set flag to current bit to true
            checker |= ( 1 << charAcii);
        }
    return true;
}
=============================================================================================================
## 1.2        
Check Permutation: Given two strings, write a method to decide if one is a permutation of the other. 

static boolean checkPermutation(String s1, String s2){
//  we change the size of array depending on the problem constraing
//  if only alpabitic => 58
//  if only capital letters or small letter => 28
        int [] count =new int [128];
        for(char c: s1.toCharArray()){
            count[c]++;
        }
        for(char c: s2.toCharArray()){
            count[c]--;
        }
        for(int i=0;i<128;i++){
            if(count[i]!=0) return false;
        }
        return true;
    }
