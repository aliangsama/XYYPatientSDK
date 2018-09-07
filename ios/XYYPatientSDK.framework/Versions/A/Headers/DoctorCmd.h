//
//  DoctorListCmd.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/22.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "BaseCommand.h"

@interface DoctorListCmd : BaseCommand
@property(nonatomic,copy)NSString *departmentId;//科室id
@property(nonatomic,copy)NSString *doctorName;//医生名称
@property (nonatomic,assign) NSInteger pageNum;
@property (nonatomic,assign) NSInteger pageSize;
@end

//申请开处方单
@interface SQRecordCmd : BaseCommand
@property(nonatomic,assign)NSInteger doctorId;
@end

//结束问诊
@interface CloseRecordCmd : BaseCommand
@property(nonatomic,assign)NSInteger doctorId;
@end
