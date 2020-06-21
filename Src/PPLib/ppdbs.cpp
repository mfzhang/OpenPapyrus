// PPDBS.CPP
// This file was generated by DL600C.EXE from 'D:\Papyrus\Src\Rsrc\dl600\ppdbs.dl6'
//

#include "ppdbs.h"

DBTABLE_CONSTRUCTOR(Reference_, ObjType)
DBTABLE_CONSTRUCTOR(Reference2, ObjType)
DBTABLE_CONSTRUCTOR(Property, ObjType)
DBTABLE_CONSTRUCTOR(UuidRef, ID)
DBTABLE_CONSTRUCTOR(TextRef, ObjID)
DBTABLE_CONSTRUCTOR(UnxTextRef, ObjID)
DBTABLE_CONSTRUCTOR(ObjLikeness, ObjType)
DBTABLE_CONSTRUCTOR(ObjSync, DBID)
DBTABLE_CONSTRUCTOR(ObjSyncBu, ObjType)
DBTABLE_CONSTRUCTOR(ObjSyncQueue, ID)
DBTABLE_CONSTRUCTOR(ObjAssoc, ID)
DBTABLE_CONSTRUCTOR(ObjTag, ObjType)
DBTABLE_CONSTRUCTOR(Country, ID)
DBTABLE_CONSTRUCTOR(Region, ID)
DBTABLE_CONSTRUCTOR(City, ID)
DBTABLE_CONSTRUCTOR(EAddr, ID)
DBTABLE_CONSTRUCTOR(World, ID)
DBTABLE_CONSTRUCTOR(TempKLADR, ID__)
DBTABLE_CONSTRUCTOR(FiasAddrObj, RecUuID)
DBTABLE_CONSTRUCTOR(FiasHouseObj, IdUuRef)
DBTABLE_CONSTRUCTOR(GeoTrack, ObjType)
DBTABLE_CONSTRUCTOR(Person, ID)
DBTABLE_CONSTRUCTOR(BankAccount_Pre9004, ID)
DBTABLE_CONSTRUCTOR(PersonKind, KindID)
DBTABLE_CONSTRUCTOR(Register, ID)
DBTABLE_CONSTRUCTOR(PersonEvent, ID)
DBTABLE_CONSTRUCTOR(StaffList_Pre9003, ID)
DBTABLE_CONSTRUCTOR(PersonPost, ID)
DBTABLE_CONSTRUCTOR(StaffCalendar, CalID)
DBTABLE_CONSTRUCTOR(TempStaffCal, ID__)
DBTABLE_CONSTRUCTOR(Salary, ID)
DBTABLE_CONSTRUCTOR(TempSalary, ID)
DBTABLE_CONSTRUCTOR(Goods2, ID)
DBTABLE_CONSTRUCTOR(HistGoods, ID)
DBTABLE_CONSTRUCTOR(Barcode, GoodsID)
DBTABLE_CONSTRUCTOR(ArGoodsCode, GoodsID)
DBTABLE_CONSTRUCTOR(GoodsExt, GoodsID)
DBTABLE_CONSTRUCTOR(Package, ID)
DBTABLE_CONSTRUCTOR(PackageLink, PckgID)
DBTABLE_CONSTRUCTOR(SpecSeries, Serial)
DBTABLE_CONSTRUCTOR(SpecSeries2, ID)
DBTABLE_CONSTRUCTOR(Location, ID)
DBTABLE_CONSTRUCTOR(CurrencyRate, Dt)
DBTABLE_CONSTRUCTOR(Bill, ID)
DBTABLE_CONSTRUCTOR(HistBill, ID)
DBTABLE_CONSTRUCTOR(HistTrfr, HistBillID)
DBTABLE_CONSTRUCTOR(BillAmount, BillID)
DBTABLE_CONSTRUCTOR(PayPlan, BillID)
DBTABLE_CONSTRUCTOR(Receipt, ID)
DBTABLE_CONSTRUCTOR(CurRest, LocID)
DBTABLE_CONSTRUCTOR(LotCurRest, LDRest)
DBTABLE_CONSTRUCTOR(LotCurRest2, LDRestF)
DBTABLE_CONSTRUCTOR(LotExtCode, LotID)
DBTABLE_CONSTRUCTOR(EgaisProduct, ID)
DBTABLE_CONSTRUCTOR(EgaisPerson, ID)
DBTABLE_CONSTRUCTOR(EgaisRefA, ID)
DBTABLE_CONSTRUCTOR(VetisEntity, ID)
DBTABLE_CONSTRUCTOR(VetisProduct, EntityID)
DBTABLE_CONSTRUCTOR(VetisPerson, EntityID)
DBTABLE_CONSTRUCTOR(VetisDocument, EntityID)
DBTABLE_CONSTRUCTOR(Inventory, BillID)
DBTABLE_CONSTRUCTOR(TempInventorySubst, GoodsID)
DBTABLE_CONSTRUCTOR(Quotation, ID)
DBTABLE_CONSTRUCTOR(Quot2Rel, ID)
DBTABLE_CONSTRUCTOR(Quotation2, RelID)
DBTABLE_CONSTRUCTOR(PriceList, ID)
DBTABLE_CONSTRUCTOR(PriceLine, ListID)
DBTABLE_CONSTRUCTOR(Transfer, LocID)
DBTABLE_CONSTRUCTOR(LocTransf, LocID)
DBTABLE_CONSTRUCTOR(TempLocTransf, ID__)
DBTABLE_CONSTRUCTOR(GoodsDebt, GoodsID)
DBTABLE_CONSTRUCTOR(CpTransf, BillID)
DBTABLE_CONSTRUCTOR(AdvBillItem, BillID)
DBTABLE_CONSTRUCTOR(Workbook, ID)
DBTABLE_CONSTRUCTOR(Project, ID)
DBTABLE_CONSTRUCTOR(PrjTask, ID)
DBTABLE_CONSTRUCTOR(SCard, ID)
DBTABLE_CONSTRUCTOR(TempSCard, ID)
DBTABLE_CONSTRUCTOR(SCardOp, SCardID)
DBTABLE_CONSTRUCTOR(CSession, ID)
DBTABLE_CONSTRUCTOR(TempCSessChecks, ID)
DBTABLE_CONSTRUCTOR(CCheck, ID)
DBTABLE_CONSTRUCTOR(CCheckExt, CheckID)
DBTABLE_CONSTRUCTOR(CCheckPaym, CheckID)
DBTABLE_CONSTRUCTOR(TempCCheckQtty, ID)
DBTABLE_CONSTRUCTOR(TempCCheckGrp, ID__)
DBTABLE_CONSTRUCTOR(TempCCheckGdsCorr, ID__)
DBTABLE_CONSTRUCTOR(TempCCheckLine, CheckID)
DBTABLE_CONSTRUCTOR(CCheckLine, CheckID)
DBTABLE_CONSTRUCTOR(CCheckLineExt, CheckID)
DBTABLE_CONSTRUCTOR(CGoodsLine, Dt)
DBTABLE_CONSTRUCTOR(CCurPrice, CashID)
DBTABLE_CONSTRUCTOR(DvcLoadingStat, ID)
DBTABLE_CONSTRUCTOR(DlsObj, DlsID)
DBTABLE_CONSTRUCTOR(QualityCert, ID)
DBTABLE_CONSTRUCTOR(Article, ID)
DBTABLE_CONSTRUCTOR(Account_Pre9004, ID)
DBTABLE_CONSTRUCTOR(AcctRel, ID)
DBTABLE_CONSTRUCTOR(AccTurn, Acc)
DBTABLE_CONSTRUCTOR(Balance, Dt)
DBTABLE_CONSTRUCTOR(BudgetItem, ID)
DBTABLE_CONSTRUCTOR(VATBook, ID)
DBTABLE_CONSTRUCTOR(MrpTab, ID)
DBTABLE_CONSTRUCTOR(MrpLine, ID)
DBTABLE_CONSTRUCTOR(SysJournal, Dt)
DBTABLE_CONSTRUCTOR(SjRsrv, Dt)
DBTABLE_CONSTRUCTOR(GtaJournal, Dt)
DBTABLE_CONSTRUCTOR(ObjVer, ID)
DBTABLE_CONSTRUCTOR(SysProfiler, StartDt)
DBTABLE_CONSTRUCTOR(Cr_PosLoad, Cash_Code)
DBTABLE_CONSTRUCTOR(Cr_CredoPay, BarCode)
DBTABLE_CONSTRUCTOR(Cr_ZReport, CashNumber)
DBTABLE_CONSTRUCTOR(Cr_Sale, Quant)
DBTABLE_CONSTRUCTOR(Cr_CashAuth, ShopIndex)
DBTABLE_CONSTRUCTOR(Cr_CashDCrd, ShopIndex)
DBTABLE_CONSTRUCTOR(PredictSales, GoodsID)
DBTABLE_CONSTRUCTOR(GoodsStat, Loc)
DBTABLE_CONSTRUCTOR(Processor, ID)
DBTABLE_CONSTRUCTOR(Tech, ID)
DBTABLE_CONSTRUCTOR(TSession, ID)
DBTABLE_CONSTRUCTOR(TSessLine, TSessID)
DBTABLE_CONSTRUCTOR(BizScore, ActualDate)
DBTABLE_CONSTRUCTOR(GlobalBizScore, UpdCounter)
DBTABLE_CONSTRUCTOR(DebtStat, AccSheetID)
DBTABLE_CONSTRUCTOR(CheckOpJrnl, Dt)
DBTABLE_CONSTRUCTOR(UserFuncPrfSess, ID)
DBTABLE_CONSTRUCTOR(UserFuncPrf, SessID)
DBTABLE_CONSTRUCTOR(TsTaJournal, ID)
DBTABLE_CONSTRUCTOR(TempTSessRep, ID__)
DBTABLE_CONSTRUCTOR(TempPrcBusy, ID__)
DBTABLE_CONSTRUCTOR(TempPredictSales, Dt)
DBTABLE_CONSTRUCTOR(TempGoodsStat, GoodsID)
DBTABLE_CONSTRUCTOR(TempGoodsRest, ID__)
DBTABLE_CONSTRUCTOR(TempCSessExc, OrgGoodsID)
DBTABLE_CONSTRUCTOR(TempDeficit, Location)
DBTABLE_CONSTRUCTOR(TempShipmentAnlz, BillID)
DBTABLE_CONSTRUCTOR(TempGoodsOpr, ID__)
DBTABLE_CONSTRUCTOR(TempGoodsMov, Grp)
DBTABLE_CONSTRUCTOR(TempGoodsMov2, ID__)
DBTABLE_CONSTRUCTOR(TempGoodsBillCmp, GoodsID)
DBTABLE_CONSTRUCTOR(TempAccTrnovr, Dt)
DBTABLE_CONSTRUCTOR(TempSellTrnovr, ID)
DBTABLE_CONSTRUCTOR(TempTrfrGrpng, ID__)
DBTABLE_CONSTRUCTOR(TempTrfrAnlz, ID__)
DBTABLE_CONSTRUCTOR(TempOpGrpng, ID__)
DBTABLE_CONSTRUCTOR(TempPerson, ID)
DBTABLE_CONSTRUCTOR(TempOrder, ID)
DBTABLE_CONSTRUCTOR(TempDoubleID, PrmrID)
DBTABLE_CONSTRUCTOR(TempAssoc, PrmrID)
DBTABLE_CONSTRUCTOR(TempAccturnGrpng, Dt)
DBTABLE_CONSTRUCTOR(TempAccAnlz, Dt)
DBTABLE_CONSTRUCTOR(TempBill, BillID)
DBTABLE_CONSTRUCTOR(TempFreight, BillID)
DBTABLE_CONSTRUCTOR(TempLot, LotID)
DBTABLE_CONSTRUCTOR(TempGoodsTaxAnlz, Dt)
DBTABLE_CONSTRUCTOR(TempPaymPlan, Dt)
DBTABLE_CONSTRUCTOR(TempSyncCmp, ObjType)
DBTABLE_CONSTRUCTOR(TempAsset, LotID)
DBTABLE_CONSTRUCTOR(TempQuotSerial, GoodsID)
DBTABLE_CONSTRUCTOR(TempQuot, ID__)
DBTABLE_CONSTRUCTOR(TempGoodsCargo, GoodsID)
DBTABLE_CONSTRUCTOR(TempPrjTask, TabID)
DBTABLE_CONSTRUCTOR(TempPriceAnlz, TabID)
DBTABLE_CONSTRUCTOR(TempPersonEvent, ID)
DBTABLE_CONSTRUCTOR(TempPersonRel, ID)
DBTABLE_CONSTRUCTOR(TempArAgt, ArID)
DBTABLE_CONSTRUCTOR(TempScale, ID)
DBTABLE_CONSTRUCTOR(TempLogFileMon, ID__)
DBTABLE_CONSTRUCTOR(TempCashNode, ID)
DBTABLE_CONSTRUCTOR(TempReport, ID)
DBTABLE_CONSTRUCTOR(TempPalm, ID)
DBTABLE_CONSTRUCTOR(TempLongOrder, ID)
DBTABLE_CONSTRUCTOR(TempTransport, ID)
DBTABLE_CONSTRUCTOR(TempBudget, ID)
DBTABLE_CONSTRUCTOR(TempBudgItem, ID)
DBTABLE_CONSTRUCTOR(TempBizScTempl, ID)
DBTABLE_CONSTRUCTOR(TempCCheck, ID)
DBTABLE_CONSTRUCTOR(TempSysJournal, ID)
DBTABLE_CONSTRUCTOR(TempGlobUserAcc, ID)
DBTABLE_CONSTRUCTOR(TempDBDiv, ID)
DBTABLE_CONSTRUCTOR(TempUserProfile, ID)
DBTABLE_CONSTRUCTOR(TestRef01, ID)
DBTABLE_CONSTRUCTOR(TestRef02, ID)
DBTABLE_CONSTRUCTOR(TestTa01, Dt)
