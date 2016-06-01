--
-- Created by IntelliJ IDEA.
-- User: ly
-- Date: 2016/5/25 0025
-- Time: 上午 11:26
-- To change this template use File | Settings | File Templates.
--
--[[
--struct TimingLotteryInfo
{
	enum{
		TABLE_STATE_ANTE,
		TABLE_STATE_RESULT
	};

	uint32 state;														// 当前状态
	uint32 state_duration;												// 状态剩余时间
	uint32 poker_back_id;												// 牌背id

	uint64 jackpot;														// jackpot值
	uint32 last_big_prize_time;                                     // 上次大奖时间
	std::string rule;                                                        // 规则
	尝试性解析时时彩打开信息
-- ]]
local socket = {}

function socket.handle_packet(op_code, packet)
    print("socket handle_packet op_code = " .. tostring(op_code))
    print("tolua.type(packet) = " .. tolua.type(packet) )
    if op_code == 3301 then
        local state = packet:readInt()
        local state_duration = packet:readInt()
        local poker_back_id = packet:readInt()
        local jackpot = packet:readLongLong()
        local last_big_prize_time = packet:readInt()
        local rule = packet:readString()
        print("state = " .. tostring(state) .. " state_duration = " .. tostring(state_duration) .. "poker_back_id = " .. tostring(poker_back_id) .. "jackpot = " .. tostring(jackpot)
        .. "last_big_prize_time = " .. tostring(last_big_prize_time) .. "rule = " .. tostring(rule) )
    end
    --need to do
end

function socket.regist_script_handler()
    local function callback(op_code, packet,cao)
        print("callback opcode = " .. tostring(op_code) .. "packet = " .. tostring(packet) .. "cao = " .. tostring(cao))
        socket.handle_packet(op_code,packet)
        return true
    end
    print("======== begin socket.regist_script_handler")
    LuaPassager:getInstance():registLuaNetPacketHandler(callback)
    return true
end

return socket