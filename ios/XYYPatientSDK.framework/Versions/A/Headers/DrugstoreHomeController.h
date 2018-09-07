//
//  DrugstoreHomeController.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/26.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import "BaseTableViewController.h"

@interface DrugstoreHomeController : BaseTableViewController
@property(nonatomic,nonnull,copy)NSString *prescriptionId;//处方id
@property(nonatomic,nonnull,copy)NSString *prescriptionCode;//处方Code
@property(nonatomic,assign)BOOL isShowQYbtn;
@property(nonatomic,assign)int prescriptionType;
@end
