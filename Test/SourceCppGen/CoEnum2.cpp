/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/CoEnum2.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "CoEnum2.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::CoEnum2::
#define GLOBAL_NAME ::vl_workflow_global::CoEnum2::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::CoEnum2::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_CoEnum2)
	vl_workflow_global::CoEnum2 instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString(L"", false);
	FINALIZE_GLOBAL_STORAGE_CLASS

		instance.s = ::vl::WString::Empty;
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_CoEnum2)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	::vl::collections::LazyList<::vl::vint32_t> CoEnum2::GetNumbers()
	{
		return ::vl::reflection::description::GetLazyList<::vl::vint32_t>(::vl::reflection::description::EnumerableCoroutine::Create(LAMBDA(::vl_workflow_global::__vwsnf1_CoEnum2_GetNumbers_())));
	}

	::vl::WString CoEnum2::main()
	{
		{
			auto __vwsn_for_enumerable_i = ::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueEnumerable>(GLOBAL_NAME GetNumbers());
			auto __vwsn_for_enumerator_i = ::vl::__vwsn::This(__vwsn_for_enumerable_i.Obj())->CreateEnumerator();
			while (::vl::__vwsn::This(__vwsn_for_enumerator_i.Obj())->Next())
			{
				auto i = ::vl::__vwsn::Unbox<::vl::vint32_t>(::vl::__vwsn::This(__vwsn_for_enumerator_i.Obj())->GetCurrent());
				{
					(GLOBAL_NAME s = ((((::vl::WString(L"", false) + GLOBAL_NAME s) + ::vl::WString(L"[", false)) + ::vl::__vwsn::ToString(i)) + ::vl::WString(L"]", false)));
				}
			}
		}
		return GLOBAL_NAME s;
	}

	CoEnum2& CoEnum2::Instance()
	{
		return Getvl_workflow_global_CoEnum2().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_CoEnum2_GetNumbers_::__vwsnf1_CoEnum2_GetNumbers_()
	{
	}

	::vl::Ptr<::vl::reflection::description::ICoroutine> __vwsnf1_CoEnum2_GetNumbers_::operator()(::vl::reflection::description::EnumerableCoroutine::IImpl* __vwsn_co_impl_) const
	{
		return ::vl::Ptr<::vl::reflection::description::ICoroutine>(new ::vl_workflow_global::__vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine(__vwsn_co_impl_));
	}

	//-------------------------------------------------------------------

	__vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine::__vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine(::vl::reflection::description::EnumerableCoroutine::IImpl* __vwsnctor___vwsn_co_impl_)
		:__vwsn_co_impl_(__vwsnctor___vwsn_co_impl_)
	{
		this->__vwsn_co0_for_begin_i = 0;
		this->__vwsn_co1_for_end_i = 0;
		this->__vwsn_co2_i = 0;
		this->__vwsn_co_state_ = 0;
		this->__vwsn_prop_Failure = ::vl::Ptr<::vl::reflection::description::IValueException>();
		this->__vwsn_prop_Status = ::vl::reflection::description::CoroutineStatus::Waiting;
	}

	::vl::Ptr<::vl::reflection::description::IValueException> __vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine::GetFailure()
	{
		return __vwsn_prop_Failure;
	}
	void __vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine::SetFailure(::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_value_)
	{
		(__vwsn_prop_Failure = __vwsn_value_);
	}

	::vl::reflection::description::CoroutineStatus __vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine::GetStatus()
	{
		return __vwsn_prop_Status;
	}
	void __vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine::SetStatus(::vl::reflection::description::CoroutineStatus __vwsn_value_)
	{
		(__vwsn_prop_Status = __vwsn_value_);
	}

	void __vwsnc1_CoEnum2_GetNumbers___vl_reflection_description_ICoroutine::Resume(bool __vwsn_raise_exception_, ::vl::Ptr<::vl::reflection::description::CoroutineResult> __vwsn_co_result_)
	{
		if ((::vl::__vwsn::This(this)->GetStatus() != ::vl::reflection::description::CoroutineStatus::Waiting))
		{
			throw ::vl::Exception(::vl::WString(L"Resume should be called only when the coroutine is in the waiting status.", false));
		}
		::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Executing);
		try
		{
			{
				while (true)
				{
					if ((__vwsn_co_state_ == 0))
					{
						(__vwsn_co0_for_begin_i = 0);
						(__vwsn_co1_for_end_i = 10);
						(__vwsn_co2_i = __vwsn_co0_for_begin_i);
						if ((__vwsn_co2_i <= __vwsn_co1_for_end_i))
						{
							(__vwsn_co_state_ = 3);
							continue;
						}
						(__vwsn_co_state_ = 1);
						continue;
					}
					if ((__vwsn_co_state_ == 1))
					{
						::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
						return;
					}
					if ((__vwsn_co_state_ == 2))
					{
						if (static_cast<bool>(__vwsn_co_result_))
						{
							if (static_cast<bool>(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure()))
							{
								throw ::vl::Exception(::vl::__vwsn::This(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure().Obj())->GetMessage());
							}
						}
						if ((__vwsn_co2_i == 2))
						{
							{
								::vl::reflection::description::EnumerableCoroutine::ReturnAndExit(__vwsn_co_impl_);
								return;
							}
						}
						(__vwsn_co2_i = (__vwsn_co2_i + 1));
						if ((__vwsn_co2_i <= __vwsn_co1_for_end_i))
						{
							(__vwsn_co_state_ = 3);
							continue;
						}
						(__vwsn_co_state_ = 1);
						continue;
					}
					if ((__vwsn_co_state_ == 3))
					{
						::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Waiting);
						(__vwsn_co_state_ = 2);
						{
							::vl::reflection::description::EnumerableCoroutine::JoinAndPause(__vwsn_co_impl_, ::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueEnumerable>(::vl::__vwsn::Range(__vwsn_co2_i, (__vwsn_co2_i + 2) + 1)));
						}
						return;
					}
				}
			}
		}
		catch(const ::vl::Exception& __vwsne_0)
		{
			auto __vwsn_co_ex_ = ::vl::reflection::description::IValueException::Create(__vwsne_0.Message());
			{
				::vl::__vwsn::This(this)->SetFailure(__vwsn_co_ex_);
				::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
				if (__vwsn_raise_exception_)
				{
					throw;
				}
			}
		}
	}

}

#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
