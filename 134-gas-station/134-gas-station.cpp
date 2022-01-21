class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {   int gas_left = 0;
        int final_gas = 0;
        int res = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            gas_left += gas[i] - cost[i];
            final_gas += gas[i] - cost[i];
            if( gas_left < 0){
                gas_left = 0;
                res = i+1;
            }
        }
        if (final_gas < 0)
            return -1;
        return res;
    }
};