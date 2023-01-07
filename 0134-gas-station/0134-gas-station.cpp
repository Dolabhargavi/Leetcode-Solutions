class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ind=0,val=0,gas_c=0,cost_c=0;
        if(gas.size()==1 && gas[0]==cost[0])
            return 0;
        for(int i=0;i<gas.size();i++)
        {   
           gas_c+=gas[i];
           cost_c+=cost[i];
           val+=gas[i]-cost[i];
           if(val<0)
           {
               ind=i+1;
               val=0;
           }
            
        }
         if(gas_c<cost_c) 
             return -1;
        else
            return ind;
    }
};