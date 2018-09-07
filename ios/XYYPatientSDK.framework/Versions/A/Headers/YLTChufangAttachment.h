//
//  YLTChufangAttachment.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/24.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XYYPatientSDK.h"
typedef NS_ENUM(NSInteger,YLTChufangMessageType){
    ChufangMessageTypeSQKF   = 1, //申请开方
    ChufangMessageTypeJDCG   = 2, //医生接单成功
    ChufangMessageTypeJJJD   = 3, //拒绝接单
    ChufangMessageTypeKDCG   = 4, //开单成功
    ChufangMessageTypeJSWZ   = 5, //结束问诊
    ChufangMessageTypeYDJSWZ = 6  //药店端结束问诊
};
@interface YLTChufangAttachment : NSObject<NIMCustomAttachment>
@property(nonatomic,assign)YLTChufangMessageType type;
@end
