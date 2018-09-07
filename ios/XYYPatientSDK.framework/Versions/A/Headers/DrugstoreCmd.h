//
//  DoctorstoreCmd.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/26.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "BaseCommand.h"

@interface GetDrugstoreListCmd : BaseCommand
@property(nonatomic,nonnull,copy)NSString *prescriptionId;
@end

@interface GeneratorDemandOrderCmd : BaseCommand
@property(nonatomic,assign)NSInteger addressId;//地址编号
@property(nonatomic,assign)NSInteger storeId;//药店id
@property(nonatomic,nonnull,copy)NSString *prescriptionCode;
@property(nonatomic,assign)NSInteger patientId;
@property(nonatomic,nonnull,copy)NSString *patientName;
@property(nonatomic,nonnull,copy)NSString *patientTel;
@property(nonatomic,nonnull,copy)NSString *patientAddress;
@property(nonatomic,assign)int prescriptionType;
@property(nonatomic,assign)int demandType;//0：自取  1：配送
@end

//申请取药记录列表
@interface PatientGetDemandOrderCMD : BaseCommand
@property(nonatomic,nonnull,copy)NSString *prescriptionCode;
@property(nonatomic,assign)NSInteger pageSize;
@property(nonatomic,assign)NSInteger pageNum;
@end
