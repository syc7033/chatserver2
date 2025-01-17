#pragma once

#include "group.hpp"
#include <vector>
#include <string>

using namespace std;

class GroupModel
{
public:
    // 创建群组
    bool createGroup(Group& group);

    // 加入群组
    void addGroup(int userid, int groupid, string role);

    // 查询用户所在群组信息
    vector<Group>  queryGroups(int userid);

    // 根据指定的groupid查询群组用户id列表 除自己userid 主要用户用户群聊业务
    vector<int> queryGroupUsers(int userid, int groupid);
private:
};