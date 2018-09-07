//
//  RecordCmd.h
//  yaolianti-c
//
//  Created by zl on 2018/6/15.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "BaseCommand.h"
//处方记录
@interface ChufangRecordCmd : BaseCommand
@property (nonatomic,assign) NSInteger pageNum;
@property (nonatomic,assign) NSInteger pageSize;
@property (nonatomic,assign) NSInteger sourceType;
@end

//处方详情
@interface ChufangRecordDetailCmd : BaseCommand
@property (nonatomic,nonnull,copy) NSString *prescriptionId;
@end

//处方记录药品列表
@interface ChufangRecordDetailNewCmd : BaseCommand
@property (nonatomic,nonnull,copy) NSString *code;
@end
