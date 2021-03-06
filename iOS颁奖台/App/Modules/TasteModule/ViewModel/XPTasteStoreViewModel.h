//
//  XPTasteStoreViewModel.h
//  XPApp
//
//  Created by 唐天成 on 16/7/6.
//  Copyright © 2016年 ShareMerge. All rights reserved.
//

#import "XPBaseViewModel.h"
#import "XPTastStoreModel.h"

@interface XPTasteStoreViewModel : XPBaseViewModel
#pragma mark 需要的参数
@property (nonatomic, strong) NSString *businessId;
@property (nonatomic, strong) NSString *business_store_id;
@property (nonatomic , strong) NSArray *storeTags;
#pragma mark 返回的数据
@property (nonatomic, strong, readonly)XPTastStoreModel* tastStoreModel;


@property (nonatomic, strong, readonly) RACCommand *tastStoreCommand;

@end
