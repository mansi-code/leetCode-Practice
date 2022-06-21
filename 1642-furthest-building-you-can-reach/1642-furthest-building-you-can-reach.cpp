class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        //max heap for storing bricks needed 
        priority_queue<int> maxB;
    
        int i=0, diff =0; 
        for(i=0; i<heights.size()-1; i++){ 
            diff = heights[i+1]-heights[i];
            
           
            if(diff <= 0){// no need for ladder or brick
                continue;
            }

            bricks -= diff;  //subtract the bricks needed
            maxB.push(diff); //push the bricks needed
            
            
            if(bricks < 0){ // if after the push bricks become less than 0, bring them back                             //and use ladder 
                bricks += maxB.top();// subtract the top from max heap (largest bricks used)
                maxB.pop(); //pop the largest bricks used
                ladders--; //use the ladder instead 
            }

            
            if(ladders < 0) break; //if ladders also  finished break  
        }
        
       
        return i;// return the index reached 
    }
   
};