#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <fmt/core.h>

class Execute {
    public:
        Execute() = default;

        
        void set_files(const std::string& emo_uuid, const std::string& report_loads_filename);
        void get_files(const std::string& emo_uuid, const std::string& path_to);
        void execute(const std::string& emo_uuid, double ipopt_reduction, //0.30
        int cost_profile_idx, //state_id
        int ipopt_popsize //10
        ); 
        void update_output(const std::string& emo_uuid, double initial_cost);

        bool process_file(const std::string& source_path, const std::string& destination_path, float initial_cost);
};

